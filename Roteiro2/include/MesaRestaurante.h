#ifndef MESARESTAURANTE_H
#define MESARESTAURANTE_H
#include "Pedido.h"

class MesaRestaurante
{
    public:
        MesaRestaurante();
        virtual ~MesaRestaurante();
        void adcionaAoPedido(Pedido pd);
        void zeraPedidos();
        float calculaTotal();
        Pedido getPedidos(int i);
        std::string toString();

    protected:

    private:
        Pedido pedidos[30];
        int indice;
};

#endif // MESARESTAURANTE_H
