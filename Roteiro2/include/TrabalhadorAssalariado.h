#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        virtual ~TrabalhadorAssalariado();
        float calcularPagamento();
        float calcularPagamentoSemanal();

    protected:

    private:
};

#endif // TRABALHADORASSALARIADO_H
