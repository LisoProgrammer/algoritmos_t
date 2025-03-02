#ifndef NOTIFICACION_H
#define NOTIFICACION_H
#include <string>
using namespace std;
class Notificacion {
public:
  Notificacion(const string &msg, const string &destinatario);
  virtual ~Notificacion() = default; // Destructor virtual
  virtual void enviar() const = 0;
protected:
  string msg;
  string destinatario;
};

#endif // NOTIFICACION_H