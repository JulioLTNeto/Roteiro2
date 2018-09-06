#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    indice = 0;
}

void RestauranteCaseiro::adcionaAoPedido(Pedido pedidos){
    MesaRestaurante m = MesaRestaurante();
    m.adcionaAoPedido(pedidos);
    mesa[indice] = m;
    indice++;
    if(indice > 30){
        indice = 0;
    }
}

MesaRestaurante RestauranteCaseiro::getMesa(int i){
    return mesa[i];
}

float RestauranteCaseiro::calculaTotalRestaurante(){
    int cont;
    float total = 0;
    for(cont = 0; cont < indice; cont++){
        total = total + mesa[cont].calculaTotal();
    }
    return total;
}

RestauranteCaseiro::~RestauranteCaseiro()
{
    //dtor
}
