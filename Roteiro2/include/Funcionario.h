#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();
        void setNome(std::string nome);
        void setMatricula(std::string matricula);
        void setSalario(float salario);
        std::string getNome();
        std::string getMatricula();
        float getSalario();

    protected:
        float salario;

    private:
        std::string nome;
        std::string matricula;

};

#endif // FUNCIONARIO_H
