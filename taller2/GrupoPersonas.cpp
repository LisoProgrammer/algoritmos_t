#include <iostream>
using namespace std;
#include "GrupoPersonas.h"

grupoPersonas::grupoPersonas(int n) : cantidad(n)
{
    personas = new Persona *[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        personas[i] = nullptr;
    }
}

void grupoPersonas::agregarPersona(string nombre, float peso, float altura, int edad, int sexo)
{
    int index = this->index;
    if (index + 1 > this->cantidad)
    {
        cout<<"Limite del array alcanzado." <<endl;
    }
    else
    {
        personas[index] = new Persona(nombre, peso, altura, edad, sexo);
        this->index += 1;
    }
}
Persona *grupoPersonas::operator[](int index) const
{
    if (index >= 0 && index < cantidad)
        return personas[index];
    else
        return nullptr; // O manejar el error de otra forma
}

void grupoPersonas::mostrarPersonas()
{
    // cout<<"Nombre\t\tPeso(kg)\tAltura(m)\tEdad\tSexo"<<endl;
    for (int i = 0; i < index; i++)
    {
        cout << *personas[i] << endl;
    }
}
grupoPersonas::~grupoPersonas()
{
    for (int i = 0; i < cantidad; i++)
    {
        delete personas[i];
    }
    delete[] personas;
}
