#include "ItemDePedido.h"

ItemDePedido::ItemDePedido()
{
    int quantidade = 0;
    long codProduto = 0;
    double valorUnitario = 0;
}

ItemDePedido::ItemDePedido(QUANTIDADE,CODPRODUTO,VALORUNITARIO)
{
    int quantidade = QUANTIDADE;
    long codProduto = CODPRODUTO;
    double valorUnitario = VALORUNITARIO;
}


ItemDePedido::~ItemDePedido()
{
    //dtor
}
