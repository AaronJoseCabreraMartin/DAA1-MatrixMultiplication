#include <iostream>
using namespace std;

class ClaseA {
  public:
   ClaseA() : datoA(10) {}
   int LeerA() const { return datoA; }
   void Mostrar() { 
      cout << "a = " << datoA << endl; // (1)
   }
  protected:
   int datoA;
};

class ClaseB : public ClaseA {
  public:
   ClaseB() : datoB(20) {}
   int LeerB() const { return datoB; }
   void Mostrar() { 
      cout << "a = " << datoA << ", b = " 
           << datoB << endl; // (2)
   }
  protected:
   int datoB;
};

int main() {
   ClaseB objeto;
 
   objeto.Mostrar(); // deberia salir a = 10, b = 20 (la a la establece la super clase claseA y la b la claseB)
   objeto.ClaseA::Mostrar(); // como llama solo a la super clase, deberia salir a = 10
   
   return 0;
}

