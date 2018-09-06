#include "Funcionario.h"

Funcionario::Funcionario()
{
    nome = "";
    salario = 0;
}

void Funcionario::setNome(std::string nome){
    this->nome = nome;
}

void Funcionario::setMatricula(std::string matricula){
    this->matricula = matricula;
}

void Funcionario::setSalario(float salario){
    this->salario = salario;
}

std::string Funcionario::getNome(){
    return nome;
}

std::string Funcionario::getMatricula(){
    return matricula;
}

float Funcionario::getSalario(){
    return salario;
}

Funcionario::~Funcionario()
{
    //dtor
}
