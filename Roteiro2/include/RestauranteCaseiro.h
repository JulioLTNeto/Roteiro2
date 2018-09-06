#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include "Pedido.h"
#include "MesaRestaurante.h"

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        virtual ~RestauranteCaseiro();
        void adcionaAoPedido(Pedido pedidos);
        float calculaTotalRestaurante();
        MesaRestaurante getMesa(int i);

    protected:

    private:
        MesaRestaurante mesa[30];
        int indice;
};

#endif // RESTAURANTECASEIRO_H
