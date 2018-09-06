#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado();
        virtual ~Quadrado();
        float calcularArea(float base, float altura);

    protected:

    private:
};

#endif // QUADRADO_H
