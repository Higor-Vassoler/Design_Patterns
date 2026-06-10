#include <iostream>
#include <string>
#include <limits>
#include "ProdutoFacade.hpp"
#include "Validation.hpp"

int ProdutoFacade::criar(DataBase &db){
    std::string nome;
    std::string desc;
    float valor = 0.0f;

    std::cout << "Insira o nome do produto:\n>> ";
    getline(std::cin, nome);
    while(!validaNome(nome)){
        std::cout << "\nNome invalido.\nInsira outro nome: ";
        getline(std::cin, nome);
    }
    p.setNome(nome);

    std::cout << "Insira a descricao do produto:\n>> ";
    getline(std::cin, desc);
    if(validaDesc(desc)){
        p.setDesc(desc);
    } else {
        p.setDesc("Sem Descricao...");
    }

    std::cout << "Insira o valor do produto:\n>> ";
    // Adicionada proteção para caso o usuário digite texto ao invés de número
    while (!(std::cin >> valor) || !validaValor(valor)) {
        std::cin.clear(); // Limpa o status de "erro" do cin
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Joga a sujeira do buffer fora
        std::cout << "\nValor invalido.\nInsira um valor numerico valido (ex: 10.50): ";
    }
    
    // Limpamos o '\n' gerado pelo último enter após digitar o float
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    Produto novoProduto;
    novoProduto.setNome(nome);
    novoProduto.setDesc(desc);
    novoProduto.setValor(valor);
    novoProduto.setId();
    
    if (db.inserir(novoProduto)) {
        std::cout << "\nProduto inserido com sucesso!\n";
        return 1;
    }
    return 0;
}

int ProdutoFacade::remover(DataBase &db){
    if (db.remover()) {
        std::cout << "\nUltimo produto removido com sucesso!\n";
        return 1;
    } else {
        std::cout << "\nNenhum produto para remover.\n";
        return 0;
    }
}

int ProdutoFacade::listar(DataBase &db){
    std::cout << "\n--- Lista de Produtos ---\n";
    db.imprimir();
    return 1;
}