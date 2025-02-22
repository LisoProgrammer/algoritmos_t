#ifndef IMC_H
#define IMC_H

#include <string>
using namespace std;
#include "Persona.h"  // Se necesita conocer la clase Persona

class IMC {
private:
    // Métodos privados que usan referencia constante a Persona
    float calcularIMC(const Persona &persona) const;
    string clasificarPeso(const Persona &persona) const;
    void calcularPesoSaludable(const Persona &persona);
    float calcularGrasaCorporal(const Persona &persona) const;

public:
    float imc;
    string peso_clasif;
    float min_peso_ok;
    float max_peso_ok;
    float grasa_corp;

    // Constructor recibe una referencia constante
    IMC(const Persona &persona);
};

#endif // IMC_H
