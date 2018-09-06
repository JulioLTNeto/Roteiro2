#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        virtual ~Circulo();
        float calcularArea(float raio);

    protected:

    private:
};

#endif // CIRCULO_H
