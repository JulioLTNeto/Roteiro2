#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        virtual ~FiguraGeometrica();
        void setNome(std::string nome);
        std::string getNome();
        float calcularArea();

    protected:

    private:
        std::string nome;
};

#endif // FIGURAGEOMETRICA_H
