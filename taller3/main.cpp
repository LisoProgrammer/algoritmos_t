#include <iostream>
#include <vector>
using namespace std;
#include "NotificacionEmail.h"
#include "NotificacionSMS.h"
#include "NotificacionPush.h"

int main(){
    // Crear instancias de diferentes tipos de notificaciones
    std::vector<Notificacion*> notificaciones;

    notificaciones.push_back(new NotificacionEmail("Hola, revisa tu bandeja de entrada.", "usuario@email.com", "Nuevo mensaje"));
    notificaciones.push_back(new NotificacionSMS("Tu codigo de verificacion es 123456", "1234567890"));
    notificaciones.push_back(new NotificacionPush("Tienes una nueva oferta disponible.", "ID_USUARIO_123"));

    // Enviar todas las notificaciones usando polimorfismo
    for (const auto& notificacion : notificaciones) {
        notificacion->enviar();
    }

    // Liberar memoria
    for (auto& notificacion : notificaciones) {
        delete notificacion;
    }

    return 0;
}
/*
g++ main.cpp Notificacion.cpp NotificacionEmail.cpp NotificacionSMS.cpp NotificacionPush.cpp  -o main.exe
./main.exe
*/