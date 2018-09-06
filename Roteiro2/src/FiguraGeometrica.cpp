#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica()
{
    nome = "";
}

void FiguraGeometrica::setNome(std::string nome){
    this->nome = nome;
}

std::string FiguraGeometrica::getNome(){
    return nome;
}
float FiguraGeometrica::calcularArea(){
    return 0;
}

FiguraGeometrica::~FiguraGeometrica()
{
    //dtor
}
