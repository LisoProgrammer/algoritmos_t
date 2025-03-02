#ifndef NOTIFICACIONESPUST_H
#define NOTIFICACIONESPUSH_H
#include <string>
#include "Notificacion.h"
using namespace std;
class NotificacionPush : public Notificacion {
    public:
        NotificacionPush(const string &msg, const string &destinatario);
        void enviar() const override;
};

#endif // NOTIFICACION_H