#ifndef ITEMDEPEDIDO_H
#define ITEMDEPEDIDO_H
#include "Pedido.h"

using namespace std;

class ItemDePedido : public Pedido
{
    public:
        ItemDePedido();
        ItemDePedido(int,long,double);

        virtual ~ItemDePedido();


        int quantidade;
        long codProduto;
        double valorUnitario;
    protected:

    private:
};

#endif // ITEMDEPEDIDO_H
