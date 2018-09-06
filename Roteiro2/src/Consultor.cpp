#include "Consultor.h"

Consultor::Consultor() : Funcionario()
{
    //ctor
}

float Consultor::getSalario(){
    return salario + ((salario*10)/100);
}

float Consultor::getSalario(float percentual){
    return salario + ((salario*percentual)/100);
}

Consultor::~Consultor()
{
    //dtor
}
