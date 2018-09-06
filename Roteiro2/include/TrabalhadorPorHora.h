#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        virtual ~TrabalhadorPorHora();
        float calcularPagamentoSemanal(int horas);
        void setValorHora(float valor);

    protected:

    private:
        float valorHora;
};

#endif // TRABALHADORPORHORA_H
