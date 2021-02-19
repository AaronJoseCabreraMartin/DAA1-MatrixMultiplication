// Ejemplo obtenido en http://c.conclase.net

#include <iostream>
using namespace std;

class ClaseA {
  public:
   void Incrementar() { cout << "Suma 1" << endl; }
   void Incrementar(int n) { cout << "Suma " << n << endl; }
};

class ClaseB : public ClaseA {
  public:
//   void Incrementar() { cout << "Suma 2" << endl; }
};

int main() {
   ClaseB objeto;

   objeto.Incrementar(); // deberia llamar a incrementar de ClaseA saliendo "suma 1", 
   // si el incrementar de claseB no estuviera comentado, saldria "suma 2" porque 
   // llamaria a su propio incrementar 

//   objeto.Incrementar(10); //deberia llamar al incrementar(n) de la clase A
   // saliendo por pantalla "suma n"

   objeto.ClaseA::Incrementar(); // llamara al incrementar de claseA saliendo "suma 1"

   objeto.ClaseA::Incrementar(10); // llamara al incrementar(n) de claseA saliendo "suma 10" 
   
   return 0;
}

