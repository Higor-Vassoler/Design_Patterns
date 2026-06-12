#ifndef MEDIATOR_HPP
#define MEDIATOR_HPP

#include "semaforo.hpp"

class Mediator {
    Semaforo* x;
    Semaforo* y;
    
    public:
        Mediator();

        void registrarSemaforos(Semaforo* x, Semaforo* y);
        void ficarVerde(Semaforo* s);
};

#endif