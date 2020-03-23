#ifndef CLIENTE_H
#define CLIENTE_H
#include "Pedido.h"
#include <string>

using namespace std;

class Cliente : public Pedido
{
    public:
        Cliente();
        Cliente(string);

        virtual ~Cliente();

        string nome;
    protected:

    private:
};

#endif // CLIENTE_H
