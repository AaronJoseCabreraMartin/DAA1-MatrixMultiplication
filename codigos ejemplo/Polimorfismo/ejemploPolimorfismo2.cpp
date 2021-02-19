// Ejemplo obtenido en http://c.conclase.net

#include <iostream>
#include <cstring>
using namespace std;
 
class Persona {
  public:
   Persona(char *n) { strcpy(nombre, n); }
   void VerNombre() { cout << "Persona:" << nombre << endl; }
  protected:
   char nombre[30];
};

class Empleado : public Persona {
  public:
   Empleado(char *n) : Persona(n) {}
   void VerNombre() { 
      cout << "Empleado: " << nombre << endl; 
   }
};

class Estudiante : public Persona {
  public:
   Estudiante(char *n) : Persona(n) {}
   void VerNombre() { 
      cout << "Estudiante: " << nombre << endl; 
   }
};

int main() {
   
   Persona *Pepito = new Estudiante((char *) "Jose");
   Persona *Carlos = new Empleado((char *) "Carlos");
   Estudiante *EPepito = new Estudiante((char *) "Jose");
   Empleado *ECarlos = new Empleado((char *) "Carlos");
   Carlos->VerNombre(); //  saldra "persona carlos" porque al no tener
   // virtual, llamara a la clase del puntero (Persona) y no a la clase
   // del objeto al que apunta el puntero

   ECarlos->VerNombre(); // Empleado Carlos
   Pepito->VerNombre(); // Persona Jose, lo mismo que ocurria 
   // en Carlos->vernombre, pero con la clase estudiante
   
   EPepito->VerNombre(); // Estudiante Jose
   delete Pepito;
   delete Carlos;
   delete EPepito;
   delete ECarlos;
   
   return 0;
}


