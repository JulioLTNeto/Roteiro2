#include "MesaRestaurante.h"

MesaRestaurante::MesaRestaurante()
{
    indice = 0;
}

void MesaRestaurante::adcionaAoPedido(Pedido pd){
    int cont;
    bool achou = false;
    for(cont = 0; cont < indice; cont++){
        if(pedidos[cont].getNumero() == pd.getNumero()){
            achou = true;
            pedidos[cont].setQuantidade(pedidos[cont].getQuantidade()+1);
        }
    }
    if(!achou){
        pedidos[indice] = pd;
        indice++;
        if(indice > 30){
            indice = 0;
        }
    }
}

void MesaRestaurante::zeraPedidos(){
    int cont;
    for(cont = 0; cont < indice; cont++){
        pedidos[indice].setQuantidade(0);
    }
}

Pedido MesaRestaurante::getPedidos(int i){
    return pedidos[i];
}

float MesaRestaurante::calculaTotal(){
    int cont;
    float total = 0;
    for(cont = 0; cont < indice; cont++){
        total = total + (pedidos[cont].getPreco() * pedidos[cont].getQuantidade());
    }
    return total;
}

std::string MesaRestaurante::toString(){
    std::string texto = "";
    int cont;
    for(cont = 0; cont < indice; cont++){
        texto = texto + " " + pedidos[cont].toString() + "\n";
    }
    return texto;
}

MesaRestaurante::~MesaRestaurante()
{
    //dtor
}
