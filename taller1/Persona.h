#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class IMC;  // Declaración adelantada

class Persona {
private:
    string nombre_completo;
    float peso;
    float altura;
    int edad;
    int sexo;

public:
    // Objeto IMC asociado a la persona
    IMC *imc;

    // Constructor: se declara const en los parámetros que no se modificarán
    Persona(const string &nombre_completo, float peso, float altura, int edad, int sexo);

    // Getters marcados como const
    string getNombre() const;
    float getPeso() const;
    float getAltura() const;
    int getEdad() const;
    int getSexo() const;

    // Destructor para liberar IMC
    ~Persona();
};

#endif // PERSONA_H
