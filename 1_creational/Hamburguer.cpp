#include <iostream>
#include "Hamburguer.hpp"

int ids = 0;

Hamburguer HamburguerBuilder::build()
{
    h.setId();
    return h;
}