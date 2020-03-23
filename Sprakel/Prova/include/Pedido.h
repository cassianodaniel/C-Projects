#ifndef PEDIDO_H
#define PEDIDO_H
#include "ItemDePedido.h"
#include "Cliente.h"

using namespace std;

class Pedido : public ControlePedidos
{
    public:
        Pedido();
        Pedido(long, Cliente, ItemDePedido);
        virtual ~Pedido();

        long numDePedido;
        Cliente cliente;
        ItemDePedido itens[];

        void adicionaItem(ItemDePedido, int);
    protected:

    private:
};

#endif // PEDIDO_H
