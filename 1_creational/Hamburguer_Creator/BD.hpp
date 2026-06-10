#ifndef BD_HPP
#define BD_HPP

#include <vector>
#include "Hamburguer.hpp"

class DataBase
{
private:
    std::vector<Hamburguer> hamburguers;

public:
    bool inserir(const Hamburguer &h);
    bool remover();
    void imprimir();
};

#endif