#include "Pedido.h"
#include <sstream>

Pedido::Pedido()
{
    numero = 0;
    descricao = "";
    preco = 0;
    quantidade = 0
}

void Pedido::setNumero(int numero){
    this->numero = numero;
}

void Pedido::setDescricao(std::string descricao){
    this->descricao = descricao;
}

void Pedido::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

void Pedido::setPreco(float preco){
    this->preco = preco;
}

int Pedido::getNumero(){
    return numero;
}

std::string Pedido::getDescricao(){
    return descricao;
}

int Pedido::getQuantidade(){
    return quantidade;
}

float Pedido::getPreco(){
    return preco;
}

std::string Pedido::toString(){
    std::stringstream Codigos;
    Codigos << numero;
    std::stringstream PrecS;
    PrecS << preco;
    std::stringstream QuantS;
    QuantS << quantidade;
    return "Codigo: " + Codigos.str() + "\nDescricao: " + descricao + "\nPreco: " + PrecS.str() + "\nQuantidade: " + QuantS.str();
}

Pedido::~Pedido()
{
    //dtor
}
