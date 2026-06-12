#include <iostream>
#include "mediator.hpp"
#include "semaforo.hpp"

int main(){
    Mediator m;

    Semaforo s1(&m);
    Semaforo s2(&m);

    m.registrarSemaforos(&s1, &s2);

    std::cout << "Estado inicial:" << std::endl;
    std::cout << "Semaforo 1: " << (s1.getEstado() ? "Verde" : "Vermelho") << std::endl;
    std::cout << "Semaforo 2: " << (s2.getEstado() ? "Verde" : "Vermelho") << std::endl;

    s1.solicitarPassagem();

    std::cout << "\nDepois do Semaforo 1 solicitar passagem:" << std::endl;
    std::cout << "Semaforo 1: " << (s1.getEstado() ? "Verde" : "Vermelho") << std::endl;
    std::cout << "Semaforo 2: " << (s2.getEstado() ? "Verde" : "Vermelho") << std::endl;

    s2.solicitarPassagem();

    std::cout << "\nDepois do Semaforo 2 solicitar passagem:" << std::endl;
    std::cout << "Semaforo 1: " << (s1.getEstado() ? "Verde" : "Vermelho") << std::endl;
    std::cout << "Semaforo 2: " << (s2.getEstado() ? "Verde" : "Vermelho") << std::endl;

    return 0;
}
