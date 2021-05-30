#include <iostream>

#include "retangulo.hpp"
#include "triangulo.hpp"
#include "circulo.hpp"


int main() {
  
  Retangulo r;
  Triangulo t;
  Circulo c;

  r.setAltura(4);
  r.setBase(4);
  r.calculaArea();

  t.setAltura(5);
  t.setBase(10);
  t.calculaArea();

  c.setRaio(2.5);
  c.calculaArea();

}