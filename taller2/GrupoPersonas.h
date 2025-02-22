#ifndef GRUPOP_H
#define GRUPOP_H

#include <string>
#include "Persona.h"
using namespace std;

class grupoPersonas {
private:
    Persona **personas;
    int cantidad;  
public:
    int index = 0;
    grupoPersonas(int n);
    // Declaración de agregarPersona
    void agregarPersona(string nombre, float peso, float altura, int edad, int sexo);
    Persona* operator[](int index) const;
    void mostrarPersonas();
    ~grupoPersonas();      // Declaración del destructor
};

#endif
