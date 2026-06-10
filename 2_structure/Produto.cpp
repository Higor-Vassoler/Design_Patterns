#include <iostream>
#include <string>
#include "Produto.hpp"

int ids = 1;

Produto::Produto(){

}

Produto::Produto(std::string nome, std::string desc, float valor){
    this->nome = nome;
    this->desc = desc;
    this->valor = valor;
}

void Produto::setId(){
    this->id = ids;
    ids++;
}

void Produto::setNome(std::string nome){
    this->nome = nome;
}

void Produto::setDesc(std::string desc){
    this->desc = desc;
}

void Produto::setValor(float valor){
    this->valor = valor;
}

int Produto::getId(){
    return id;
}

std::string Produto::getNome(){
    return nome;
}

std::string Produto::getDesc(){
    return desc;
}

float Produto::getValor(){
    return valor;
}