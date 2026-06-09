#include "BD.hpp"
#include "Hamburguer.hpp"
#include "enum_conversor.hpp"
#include <iostream>

using namespace std;

bool DataBase::inserir(const Hamburguer &h)
{
    hamburguers.push_back(h);

    return true;
}

bool DataBase::remover()
{
    if (hamburguers.empty())
    {
        return false;
    }

    hamburguers.pop_back();

    return true;
}

void DataBase::imprimir()
{
    int cont = 1;
    for (auto &item : hamburguers)
    {
        cout << "Hamburguer " << cont << ":\n"
             << "Pao: " << tipoPaoToString(item.getTipoPao()) << "\n"
             << "Carne: " << tipoCarneToString(item.getTipoCarne()) << "\n"
             << "Quantidade de carne: " << item.getQntdCarne() << "\n"
             << "Queijo: " << tipoQueijoToString(item.getTipoQueijo()) << "\n"
             << "Quantidade de queijo: " << item.getQntdQueijo() << "\n"
             << "Molho: " << tipoMolhoToString(item.getTipoMolho()) << "\n"
             << "Cebola: " << tipoCebolaToString(item.getTipoCebola()) << "\n"
             << "Alface: " << tipoAlfaceToString(item.getTipoAlface()) << "\n\n"
             << "-----------------------------------------------\n\n";
        ;
        cont++;
    }
}