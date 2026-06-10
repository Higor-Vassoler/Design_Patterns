#ifndef PRODUTOFACADE_HPP
#define PRODUTOFACADE_HPP

#include "Produto.hpp"
#include "BD.hpp"
#include <string>

class ProdutoFacade{
    private:
        Produto p;

    public:
        int criar(DataBase &db);
        int remover(DataBase &db);
        int listar(DataBase &db);
};

#endif