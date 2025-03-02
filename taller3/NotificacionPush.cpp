#include "NotificacionPush.h"
#include <iostream>
using namespace std;
NotificacionPush::NotificacionPush(const string &msg, const string &destinatario):Notificacion(msg, destinatario)
{
}

void NotificacionPush::enviar() const
{
    cout<<"Nueva notificacion****"<<endl;
    cout<<msg<<endl;
    cout<<"Enviado por:"<<endl;
    cout<<destinatario<<endl;
    cout<<"______________________"<<endl;
}
