#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo();
        virtual ~Triangulo();
        float calcularArea(float base, float altura);

    protected:

    private:
};

#endif // TRIANGULO_H
