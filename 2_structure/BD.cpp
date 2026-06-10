#include "BD.hpp"
#include <iostream>

using namespace std;

bool DataBase::inserir(const Produto &h)
{
    Produtos.push_back(h);
    return true;
}

bool DataBase::remover()
{
    if (Produtos.empty())
    {
        return false;
    }
    Produtos.pop_back();
    return true;
}

void DataBase::imprimir()
{
    if (Produtos.empty()) {
        cout << "Nenhum produto cadastrado.\n";
        return;
    }

    for (auto &item : Produtos)
    {
        cout << "ID: " << item.getId() 
             << " | Nome: " << item.getNome() 
             << " | Valor: R$ " << item.getValor() 
             << "\nDescricao: " << item.getDesc() << "\n\n";
    }
}