#include <iostream>
#include "Persona.h"
#include "IMC.h"
#include "GrupoPersonas.h"
using namespace std;

int main()
{
    int cantidad = 3;
    float sumaIMC = 0;
    int conteo[4] = {0}; // Bajo peso, Peso normal, Sobrepeso, Obesidad
    int hombres = 0, mujeres = 0;
    int edades[4] = {0}; // <18, 18-35, 36-50, >50
    grupoPersonas grupo1 = grupoPersonas(cantidad);
    grupo1.agregarPersona("Lisandro", 55, 1.72, 20, 1);
    grupo1.agregarPersona("Juana", 55, 1.72, 20, 0);
    grupo1.agregarPersona("Cristian", 55, 1.72, 20, 1);
    for (int i = 0; i < grupo1.index; i++)
    {
        Persona *persona = grupo1[i];
        float imc = persona->imc->imc;
        string clasif = persona->imc->peso_clasif;

        if (clasif == "Bajo peso.")
            conteo[0]++;
        else if (clasif == "Peso normal.")
            conteo[1]++;
        else if (clasif == "Sobrepeso.")
            conteo[2]++;
        else
            conteo[3]++;

        sumaIMC += imc;
        cout<<persona->getSexo()<<endl;
        (persona->getSexo() == 1) ? hombres++ : mujeres++;

        int edad = persona->getEdad();
        if (edad < 18)
            edades[0]++;
        else if (edad <= 35)
            edades[1]++;
        else if (edad <= 50)
            edades[2]++;
        else
            edades[3]++;
    }

    cout << "Media IMC: " << sumaIMC / cantidad << endl;
    cout << "Distribucion IMC: Bajo peso (" << (conteo[0] * 100.0 / cantidad) << "%), ";
    cout << "Peso normal (" << (conteo[1] * 100.0 / cantidad) << "%), ";
    cout << "Sobrepeso (" << (conteo[2] * 100.0 / cantidad) << "%), ";
    cout << "Obesidad (" << (conteo[3] * 100.0 / cantidad) << "%)" << endl;
    cout << "Porcentaje hombres: " << (hombres * 100.0 / cantidad) << "%, mujeres: " << (mujeres * 100.0 / cantidad) << "%" << endl;
    cout << "Distribucion de edades: <18 (" << (edades[0] * 100.0 / cantidad) << "%), ";
    cout << "18-35 (" << (edades[1] * 100.0 / cantidad) << "%), ";
    cout << "36-50 (" << (edades[2] * 100.0 / cantidad) << "%), ";
    cout << ">50 (" << (edades[3] * 100.0 / cantidad) << "%)" << endl;
    grupo1.mostrarPersonas();
    /*Persona persona1 = Persona("Yuliana", 55, 1.72, 20, 0);
    cout<<persona1<<endl;*/
}
/*g++ main.cpp Persona.cpp IMC.cpp GrupoPersonas.cpp -o main.exe
./main.exe*/