#include "Persona.h"
#include "IMC.h"  // Se requiere para inicializar el objeto IMC
#include <iostream>
using namespace std;
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
// Implementación de la función amiga
ostream &operator<<(ostream &os, const Persona &p) {
    os << "\nNombre: " << p.nombre_completo << "\n"
       << "Peso: " << p.peso << " kg\n"
       << "Altura: " << p.altura << " m\n"
       << "Edad: " << p.edad << "\n"
       << "Sexo: " << (p.sexo == 1 ? "Hombre" : "Mujer") << "\n"
       << "IMC: " << p.imc->imc << "\n"
       << "Clasificacion de peso: " << p.imc->peso_clasif << "\n"
       << "Rango de peso saludable: (" << p.imc->min_peso_ok << " , " << p.imc->max_peso_ok << ") kg\n"
       << "Grasa corporal: " << p.imc->grasa_corp << " %\n";
    return os;
}