Questão 2: Implemente a classe Vendedor como subclasse da classe Empregado. Um
determinado vendedor tem como atributos, para além dos atributos da classe Pessoa e
da classe Empregado, o atributo valorVendas (correspondente ao valor monetário dos
artigos vendidos) e o atributo comissao (porcentagem do valorVendas que será
adicionado ao vencimento base do Vendedor).
Note que deverá redefinir nesta subclasse o método herdado calcularSalario (o salário
de um vendedor é equivalente ao salário de um empregado usual acrescido da referida
comissão). Escreva um programa de teste adequado para esta classe.

Para resolver essa questão, foi necessário primeiro definir a classe mãe "Pessoa" com atributos e métodos de identifiação como "nome" e "sobrenome". 
Em seguida sua subclasse "Empregado", seu atributo "vencimentoBase" e seus métodos para definir e obter o vencimento e um último método para calcular o salário.
Também foi preciso criar a classe filha "Vendedor", herdando atributos e métodos das classes "Empregado" e "Pessoa" e criando novos atributos e métodos para atribuir o valor das vendas e a comissão recebida.
Por último, na função main(), foram inseridos os dados do objeto v1 e com base nos métodos estabelecidos nas classes foi calculado e impresso o salário final.

#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
    string nome;
    
    string sobrenome;
    
    public:
        string getNome(){return nome;}
        
        void setNome(string n){nome = n;}
        
        string getSobrenome(){return sobrenome;}
        
        void setSobrenome(string s){sobrenome = s;}
};

class Empregado : public Pessoa
{
    float vencimentoBase;

    public:
        float calcularSalario(){return  vencimentoBase;}
        
        void setVencimentoBase(float v){vencimentoBase = v;}
        
        float getVencimentoBase(){return vencimentoBase;}
};

class Vendedor : public Empregado
{
    float valorVendas;
    
    float comissao;

    public:
        float calcularSalario(float comiss, float venda)
            {
                float salario = getVencimentoBase() + venda * comiss;
                    return salario;
            };
        
        void setValorVendas(float v){valorVendas = v;}
        
        void setComissao(float c){comissao = c;}
        
        float getValorVendas(){return valorVendas;}
        
        float getComissao(){return comissao;}

};

int main()
{
    Vendedor v1;
        v1.setNome("Gabriel");
        v1.setSobrenome(" Ferreira");
        v1.setValorVendas(15670.9);
        v1.setVencimentoBase(2000.0);

    float s = v1.calcularSalario(0.20, 15670.9);
    cout << "O salário de " << v1.getNome() << v1.getSobrenome() <<" foi de " << s <<" reais.";

    return 0;
}
