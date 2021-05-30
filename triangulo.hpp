#ifndef Triangulo_hpp
#define Triangulo_hpp

#include "forma.hpp"

#include <iostream>
using namespace std;

class Triangulo : public Forma {
 public:
  void calculaArea();
};

#endif