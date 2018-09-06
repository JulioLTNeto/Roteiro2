#include "Endereco.h"
#include "sstream"

Endereco::Endereco()
{
    this->rua = "";
    this->numero = 0;
    this->estado = "";
    this->cidade = "";
    this->bairro = "";
    this->cep = "";
}

Endereco::Endereco(std::string rua, int numero, std::string estado, std::string cidade, std::string bairro, std::string cep){
    this->rua = rua;
    this->numero = numero;
    this->estado = estado;
    this->cidade = cidade;
    this->bairro = bairro;
    this->cep = cep;
}

void Endereco::setRua(std::string rua){
    this->rua = rua;
}

void Endereco::setNumero(int numero){
    this->numero = numero;
}

void Endereco::setEstado(std::string estado){
    this->estado = estado;
}

void Endereco::setCidade(std::string cidade){
    this->cidade = cidade;
}

void Endereco::setBairro(std::string bairro){
    this->bairro = bairro;
}

void Endereco::setCep(std::string cep){
    this->cep = cep;
}

std::string Endereco::getRua(){
    return rua;
}

int Endereco::getNumero(){
    return numero;
}

std::string Endereco::getEstado(){
    return estado;
}

std::string Endereco::getCidade(){
    return cidade;
}

std::string Endereco::getBairro(){
    return bairro;
}

std::string Endereco::getCep(){
    return cep;
}

std::string Endereco::toString(){
    std::stringstream num;
    num<<numero;
    return "Rua: " + rua + "\nNumero: " + num.str() + "\nEstado: " + estado + "\nCidade: " + cidade + "\nBairro: " + bairro + "\nCep: " + cep;
}

Endereco::~Endereco()
{
    //dtor
}
