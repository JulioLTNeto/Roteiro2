#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora() : Trabalhador()
{
    valorHora = 0;
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horas){
    int total = 40;
    float pagamento = valorHora * 40;
    if(horas > 40){
        int p = total - horas;
        p = p*1.5*valorHora;
        pagamento = pagamento+p;
    }
    return pagamento;
}

void TrabalhadorPorHora::setValorHora(float valor){
    valorHora = valor;
}

TrabalhadorPorHora::~TrabalhadorPorHora()
{
    //dtor
}
