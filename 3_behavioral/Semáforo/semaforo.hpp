#ifndef SEMAFORO_HPP
#define SEMAFORO_HPP

class Mediator;

class Semaforo {
    private:
        Mediator *m;
        bool estado; // true = Verde || false = Vermelho
    
    public:
        Semaforo(Mediator* m);

        void solicitarPassagem();

        void setEstado(bool estado);
        bool getEstado();
};

#endif