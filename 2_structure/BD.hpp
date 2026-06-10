#ifndef BD_HPP
#define BD_HPP

#include <vector>
#include "Produto.hpp"

class DataBase
{
private:
    std::vector<Produto> Produtos;

public:
    bool inserir(const Produto &h);
    bool remover();
    void imprimir();
};

#endif