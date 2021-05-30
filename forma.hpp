#ifndef Forma_hpp
#define Forma_hpp

#include <iostream>
using namespace std;

class Forma {
  public:
  virtual void calculaArea();

  void setAltura (float altura);
  void setRaio (float raio);
  void setBase (float base);

  protected:  
    float altura;
    float raio;
    float base;

};

#endif