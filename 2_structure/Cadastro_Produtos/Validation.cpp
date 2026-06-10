#include "Validation.hpp"

bool validaNome(std::string nome){
    if(nome.empty()){
        return false;
    } else {
        return true;
    }
}

bool validaDesc(std::string desc){
    if(desc.empty()){
        return false;
    } else {
        return true;
    }
}

bool validaValor(float valor){
    if(valor >= 0){
        return true;
    } else {
        return false;
    }
}