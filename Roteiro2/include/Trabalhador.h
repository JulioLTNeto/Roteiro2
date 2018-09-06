#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

class Trabalhador
{
    public:
        Trabalhador();
        virtual ~Trabalhador();
        void setNome(std::string nome);
        void setSalario(float salario);
        std::string getNome();
        float getSalario();
        float calcularPagamento();

    protected:
        float salario;

    private:
        std::string nome;

};

#endif // TRABALHADOR_H
