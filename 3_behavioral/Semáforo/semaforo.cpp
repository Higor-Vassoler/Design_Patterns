#include "semaforo.hpp"
#include "mediator.hpp"

Semaforo::Semaforo(Mediator* m){
    this->m = m;
    this->estado = false;
}

void Semaforo::solicitarPassagem(){
    m->ficarVerde(this);
}

void Semaforo::setEstado(bool estado){
    this->estado = estado;
}

bool Semaforo::getEstado(){
    return this->estado;
}