#include "forma.hpp"

void Forma::setAltura (float altura){
  this->altura = altura;
};

void Forma::setRaio (float raio){
  this->raio = raio;
};

void Forma::setBase (float base){
  this->base = base;
};

void Forma::calculaArea(){
    float res;
    res = base * altura;
    cout << "Área do retângulo é: " << res << endl;
}