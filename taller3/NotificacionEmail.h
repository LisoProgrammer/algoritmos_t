#ifndef NOTIFICACIONEMAIL_H
#define NOTIFICACIONEMAIL_H
#include <string>
#include "Notificacion.h"
using namespace std;
class NotificacionEmail : public Notificacion {
public:
    NotificacionEmail(const string &msg, const string &destinatario, const string &asunto);
    void enviar() const;
protected:
    string asunto;
};

#endif // NOTIFICACION_H