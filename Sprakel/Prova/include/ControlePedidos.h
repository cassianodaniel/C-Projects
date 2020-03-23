#ifndef CONTROLEPEDIDOS_H
#define CONTROLEPEDIDOS_H
#include "IControlePedidos.h"
#include "Pedido.h"

using namespace std;

class ControlePedidos : public IControlePedidos
{
    public:
        Pedido pedidos[];
        ControlePedidos();
        virtual ~ControlePedidos();

    protected:

    private:
};

#endif // CONTROLEPEDIDOS_H
