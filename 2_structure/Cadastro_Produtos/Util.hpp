#ifndef UTIL_HPP
#define UTIL_HPP

#include "ProdutoFacade.hpp"
#include "BD.hpp"

namespace Util{
    void limpaTela();
    void pausaTela();
    void menu();
    void opcoes(int opt, ProdutoFacade &pf, DataBase &db);
}

#endif