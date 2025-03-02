#ifndef NOTIFICACIONESMS_H
#define NOTIFICACIONESMS_H
#include <string>
#include "Notificacion.h"
using namespace std;
class NotificacionSMS : public Notificacion {
    public:
        NotificacionSMS(const string &msg, const string &destinatario);
        void enviar() const override;
};

#endif // NOTIFICACION_H