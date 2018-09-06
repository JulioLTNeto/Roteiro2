#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido
{
    public:
        Pedido();
        virtual ~Pedido();
        void setNumero(int numero);
        void setDescricao(std::string descricao);
        void setQuantidade(int quantidade);
        void setPreco(float preco);
        int getNumero();
        std::string getDescricao();
        int getQuantidade();
        float getPreco();
        std::string toString();

    protected:

    private:
        int numero;
        std::string descricao;
        int quantidade;
        float preco;
};

#endif // PEDIDO_H
