#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

class Endereco
{
    public:
        Endereco();
        Endereco(std::string rua, int numero, std::string estado, std::string cidade, std::string bairro, std::string cep);
        std::string toString();
        void setRua(std::string rua);
        void setNumero(int numero);
        void setEstado(std::string estado);
        void setCidade(std::string cidade);
        void setBairro(std::string bairro);
        void setCep(std::string cep);
        std::string getRua();
        int getNumero();
        std::string getEstado();
        std::string getCidade();
        std::string getBairro();
        std::string getCep();
        virtual ~Endereco();

    protected:

    private:
        std::string rua;
        int numero;
        std::string estado;
        std::string cidade;
        std::string bairro;
        std::string cep;
};

#endif // ENDERECO_H
