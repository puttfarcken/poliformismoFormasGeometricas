#include "circulo.hpp"

void Circulo::calculaArea(){
  float res;
  res = (raio * raio) * 3.14;
  cout << "Área do círculo é: " << res << endl;
}