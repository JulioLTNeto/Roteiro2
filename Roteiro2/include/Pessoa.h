#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include "Endereco.h"

class Pessoa
{
    public:
        Pessoa();
        Pessoa(std::string nome);
        Pessoa(std::string nome, Endereco endereco, std::string telefone);
        void setNome(std::string nome);
        void setEndereco(Endereco endereco);
        void setTelefone(std::string telefone);
        std::string getNome();
        Endereco getEndereco();
        std::string getTelefone();
        virtual ~Pessoa();

    protected:

    private:
        std::string nome;
        Endereco endereco;
        std::string telefone;

};

#endif // PESSOA_H
