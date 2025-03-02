#include "NotificacionSMS.h"
#include <iostream>
using namespace std;
NotificacionSMS::NotificacionSMS(const std::string &msg, const std::string &destinatario): Notificacion (msg, destinatario){}

void NotificacionSMS::enviar() const
{
    cout<<"Nuevo Mensaje*********"<<endl;
    cout<<msg<<endl;
    cout<<"Enviado por:"<<endl;
    cout<<destinatario<<endl;
    cout<<"______________________"<<endl;
}
