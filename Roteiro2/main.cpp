#include <iostream>
#include "Pedido.h"
#include "RestauranteCaseiro.h"
#include "Endereco.h"
#include "Pessoa.h"
#include "Consultor.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Roteiro 2" << endl;
    int escolha = 1;
    while(escolha != 0){
        system("cls");
        cout << "-----Menu-----\n\n1->Questao1\n2->Questao2\n3->Questao3\n4->Questao4\n5->Questao5\n0->Sair\n\nDigite:" << endl;
        cin >> escolha;
        if(escolha == 1){
            system("cls");
            Pedido pedido = Pedido();
            RestauranteCaseiro restaurante = RestauranteCaseiro();
            int numero;
            string descricao;
            int quantidade;
            float preco;
            while(1){
                int es = 0;
                cout << "Digite o codigo do pedido: " << endl;
                cin >> numero;
                cout << "Digite a descricao do pedido: " << endl;
                cin >> descricao;
                cout << "Digite a quantidade do pedido: " << endl;
                cin >> quantidade;
                cout << "Digite o preco do pedido: " << endl;
                cin >> preco;
                pedido.setNumero(numero);
                pedido.setDescricao(descricao);
                pedido.setQuantidade(quantidade);
                pedido.setPreco(preco);
                restaurante.adcionaAoPedido(pedido);
                cout << "Cadastrar outro?\n1->Sim\n0->Nao" <<endl;
                cin>>es;
                if(es == 0){
                    break;
                }
            }
            cout << "Total: " << restaurante.calculaTotalRestaurante() << endl;
             cout << "Digite o id da mesa: " << endl;
             int id;
             cin>>id;
             cout << restaurante.getMesa(id).toString() << endl;
            system("pause");

        }
        if(escolha == 2){
            system("cls");
            Endereco endereco = Endereco("RR", 44, "PB", "JP", "CID. Jardim Univ.", "08968675");
            Pessoa pessoas[3];
            pessoas[0] = Pessoa("Julio");
            pessoas[0].setEndereco(endereco);
            cout << "Nome: " << pessoas[0].getNome() << "\n" << pessoas[0].getEndereco().toString() << endl;
            system("pause");
        }
        if(escolha == 3){
            system("cls");
            Consultor con = Consultor();
            cout << "Digite o nome do cliente: " << endl;
            string nome;
            cin>>nome;
            cout << "Digite a matricula do cliente: " << endl;
            string matricula;
            cin>>matricula;
            cout << "Digite o salario do cliente: " << endl;
            float salario;
            cin>>salario;

            con.setMatricula(matricula);
            con.setNome(nome);
            con.setSalario(salario);

            cout << "Salario normal: " << salario << endl;
            cout << "Salario aumento 10%: " << con.getSalario() << endl;
            cout << "Digite a porcentagem a ser somada no salario" << endl;
            float valor;
            cin>>valor;
            cout << "Salario almentado: " << con.getSalario(valor) << endl;
        }
        if(escolha == 4){
            system("cls");
            cout << "Digite a base do triangulo e a altura: " << endl;
            float base, altura;
            cin>>base;
            cin>>altura;
            Triangulo t = Triangulo();
            t.setNome("Triangulo");
            cout << "\nA area do triangulo: " << t.calcularArea(base, altura);

            cout << "\nDigite a base do quadrado e a altura: " << endl;
            cin>>base;
            cin>>altura;
            Quadrado q = Quadrado();
            q.setNome("Quadrado");
            cout << "\nA area do quadrado: " << q.calcularArea(base, altura);

            cout << "\nDigite o raio do circulo: " << endl;
            float raio;
            cin>>raio;
            Circulo c = Circulo();
            c.setNome("Circulo");
            cout << "\nA area do circulo: " << c.calcularArea(raio);
        }
        if(escolha == 5){
            system("cls");
            string nome;
            cout << "Digite o nome do trabalhador" << endl;
            cin>>nome;
            int escolha;
            cout << "Ele recebe por hora ou normal?\n1->Por hora\n2->Normal" << endl;
            cin>>escolha;
            if(escolha == 1){
                int horas;
                float valor;
                cout<<"Digite quantas horas ele trabalhou"<<endl;
                cin>>horas;
                cout<<"Digite a valor da hora trabalhada"<<endl;
                cin>>valor;
                TrabalhadorPorHora tbh = TrabalhadorPorHora();
                tbh.setNome(nome);
                tbh.setValorHora(valor);
                cout << "O salario que " << tbh.getNome() << " ira receber e: " << tbh.calcularPagamentoSemanal(horas);
            }else{
                cout<<"Digite o salario mensal"<<endl;
                float salario;
                cin>>salario;
                TrabalhadorAssalariado tb = TrabalhadorAssalariado();
                tb.setNome(nome);
                tb.setSalario(salario);
                cout << "O salario que " << tb.getNome() << " vai receber e: " << tb.calcularPagamento();
            }
        }
    }
    return 0;
}
