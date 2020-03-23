#include "Pedido.h"
#include "Cliente.h"
#include "ItemDePedido.h"

Pedido::Pedido()
{
    this->numDePedido = 0;
    this->cliente = Cliente("Sem nome");
    this->itens = ItemDePedido(0,1000,0.0);
}

Pedido::Pedido(NUMDEPEDIDO, CLIENTE, ITEMDEPEDIDO)
{
    this->numDePedido = NUMDEPEDIDO;
    this->cliente = CLIENTE;
    this->itens = ITEMDEPEDIDO;
}

void Pedido::adicionaItem(ItemDePedido, int){
    //aqui
}

Pedido::~Pedido()
{
    //dtor
}
