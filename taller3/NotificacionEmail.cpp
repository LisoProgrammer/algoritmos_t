#include "NotificacionEmail.h"
#include <iostream>
using namespace std;
NotificacionEmail::NotificacionEmail(const string &msg, const string &destinatario, const string &asunto):Notificacion(msg, destinatario), asunto(asunto){}

void NotificacionEmail::enviar() const
{
    cout<<"****ENVIANDO EMAIL****"<<endl;
    cout<<"Destinatario----------"<<endl;
    cout<<destinatario<<endl;
    cout<<"Asunto----------------"<<endl;
    cout<<asunto<<endl;
    cout<<"Mensaje----------------"<<endl;
    cout<<msg<<endl;
    cout<<"_______________________"<<endl;
}