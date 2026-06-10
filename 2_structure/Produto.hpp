#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <string>

extern int ids;

class Produto {
    private:
        int id;
        std::string nome;
        std::string desc;
        float valor;
    
    public:
        Produto();
        Produto(std::string nome, std::string desc, float valor);

        void setId();
        void setNome(std::string nome);
        void setDesc(std::string desc);
        void setValor(float valor);

        int getId();
        std::string getNome();
        std::string getDesc();
        float getValor();
};

#endif