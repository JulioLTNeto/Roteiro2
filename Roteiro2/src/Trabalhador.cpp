#include "Trabalhador.h"

Trabalhador::Trabalhador()
{
    nome = "";
    salario = 0;
}

void Trabalhador::setNome(std::string nome){
    this->nome = nome;
}

void Trabalhador::setSalario(float salario){
    this->salario = salario;
}

std::string Trabalhador::getNome(){
    return nome;
}

float Trabalhador::getSalario(){
    return salario;
}

float Trabalhador::calcularPagamento(){
    return 0;
}

Trabalhador::~Trabalhador()
{
    //dtor
}
