#include "Persona.h"
#include "IMC.h"  // Se requiere para inicializar el objeto IMC

// Constructor de Persona: inicializa imc dinámicamente
Persona::Persona(const string &nombre_completo, float peso, float altura, int edad, int sexo)
    : nombre_completo(nombre_completo), peso(peso), altura(altura), edad(edad), sexo(sexo) {
    // Se crea el objeto IMC usando new y pasando la instancia actual
    imc = new IMC(*this);
}

string Persona::getNombre() const {
    return nombre_completo;
}

float Persona::getPeso() const {
    return peso;
}

float Persona::getAltura() const {
    return altura;
}

int Persona::getEdad() const {
    return edad;
}

int Persona::getSexo() const {
    return sexo;
}

// Destructor: liberar la memoria reservada para IMC
Persona::~Persona() {
    delete imc;
}
