#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado():Trabalhador()
{

}

float TrabalhadorAssalariado::calcularPagamento(){
    return salario;
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(){
    return salario/4;
}

TrabalhadorAssalariado::~TrabalhadorAssalariado()
{
    //dtor
}
