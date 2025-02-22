#include <iostream>
#include "Persona.h"
#include "IMC.h"

using namespace std;

int main() {
    // Creación de dos objetos Persona
    Persona persona1("Lisandro", 55, 1.72, 20, 1);
    cout << "IMC de " << persona1.getNombre() << ": " << persona1.imc->imc << endl;
    cout << "Clasificacion de peso: " << persona1.imc->peso_clasif << endl;
    cout << "Rango de peso saludable: (" << persona1.imc->min_peso_ok << " , " << persona1.imc->max_peso_ok << ") kg." << endl;
    cout << "Porcentaje de grasa corporal: " << persona1.imc->grasa_corp << " %" << endl;

    Persona persona2("Yuliana", 54, 1.53, 23, 1);
    cout << "IMC de " << persona2.getNombre() << ": " << persona2.imc->imc << endl;
    cout << "Clasificacion de peso: " << persona2.imc->peso_clasif << endl;
    cout << "Rango de peso saludable: (" << persona2.imc->min_peso_ok << " , " << persona2.imc->max_peso_ok << ") kg." << endl;
    cout << "Porcentaje de grasa corporal: " << persona2.imc->grasa_corp << "%" << endl;

    return 0;
}
