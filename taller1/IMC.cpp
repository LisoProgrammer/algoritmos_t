#include "IMC.h"
#include "Persona.h"

// Constructor de IMC
IMC::IMC(const Persona &persona) {
    this->imc = calcularIMC(persona);
    this->peso_clasif = clasificarPeso(persona);
    calcularPesoSaludable(persona);
    this->grasa_corp = calcularGrasaCorporal(persona);
}

float IMC::calcularIMC(const Persona &persona) const {
    return persona.getPeso() / (persona.getAltura() * persona.getAltura());
}

string IMC::clasificarPeso(const Persona &persona) const {
    // Se usa el IMC ya calculado en el constructor
    if (this->imc < 18.5)
        return "Bajo peso.";
    else if (this->imc >= 18.5 && this->imc <= 24.9)
        return "Peso normal.";
    else if (this->imc >= 25 && this->imc <= 29.9)
        return "Sobrepeso.";
    else
        return "Obesidad.";
}

void IMC::calcularPesoSaludable(const Persona &persona) {
    this->min_peso_ok = 18.5 * persona.getAltura() * persona.getAltura();
    this->max_peso_ok = 24.9 * persona.getAltura() * persona.getAltura();
}

float IMC::calcularGrasaCorporal(const Persona &persona) const {
    return 1.2 * this->imc + 0.23 * persona.getEdad() - 10.8 * persona.getSexo() - 5.4;
}
