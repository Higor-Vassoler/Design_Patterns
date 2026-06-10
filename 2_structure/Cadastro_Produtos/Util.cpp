#include <iostream>
#include <string>
#include "Util.hpp"

void Util::limpaTela(){
    std::cout << "\033[2J\033[H";
}

void Util::pausaTela(){
    std::cout << "\nPressione ENTER para continuar...";
    std::string dummy;
    std::getline(std::cin, dummy); // Espera simples pelo enter do usuário
}

void Util::menu(){
    std::cout << "Escolha uma das seguintes opcoes:\n"
              << "[1] Criar   | Produto\n"
              << "[2] Remover | Produto\n"
              << "[3] Listar  | Produtos\n\n"
              << "[0] Sair do Programa\n\n"
              << ">> ";
}

void Util::opcoes(int opt, ProdutoFacade &pf, DataBase &db){
    switch (opt)
    {
    case 1:
        pf.criar(db);
        break;
    case 2:
        pf.remover(db);
        break;
    case 3:
        pf.listar(db);
        break;
    case 0:
        std::cout << "Saindo...\n";
        break;
    default:
        Util::limpaTela();
        std::cout << "Opcao invalida...\n";
        break;
    }
}