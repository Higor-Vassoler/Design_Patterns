#include "mediator.hpp"

Mediator::Mediator(){
    x = nullptr;
    y = nullptr;
}

void Mediator::registrarSemaforos(Semaforo* x, Semaforo* y){
    this->x = x;
    this->y = y;
}

void Mediator::ficarVerde(Semaforo* s){
    if(s == x){
        x->setEstado(true);
        y->setEstado(false);
    }
    else{
        y->setEstado(true);
        x->setEstado(false);
    }
}
