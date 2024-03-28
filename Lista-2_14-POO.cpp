#include <iostream>
#include <string>

using namespace std;

class Agenda 
{
    private:
    int numero;
    string nome;
    string endereco;
    int cep;
    
    public : 
    Agenda(int numero, string nome, string endereco, int cep) : numero(numero), nome(nome), endereco(endereco), cep(cep)
    {}
    
    int getNumero()
    {
        return numero;
    }
    
    string getNome()
    {
        return nome;
    }
    
    string getEndereco()
    {
        return endereco;
    }
    
    int getCep()
    {
        return cep;
    }
    
    void setNumero(int novoNumero)
    {
        novoNumero = numero;
    }

    void setNome(string novoNome) 
    {
        novoNome = nome;
    }
    
    void setEndereco(string novoEndereco) 
    {
        novoEndereco = endereco;
    }
    
    void setCep(int novoCep)
    {
        novoCep = cep;
    }
    
    void printDados() 
    {
        cout <<"Nome: " << nome<< ".";
        cout <<"\nTelefone: " << numero<<".";
        cout<<"\nEndereço: "<<endereco<<".";
        cout<<"\nCEP: "<<cep<<".\n\n";
    }
};

int main() 
{
    Agenda contato1(123456789, "Pedro", "Rua A, 123", 12345-678);
    Agenda contato2(987654321, "José", "Rua B, 456", 98765-321);
    Agenda contato3(123123123, "Júlia", "Rua C, 789", 98765-432);
    Agenda contato4(456456456, "Patrícia", "Rua D, 987", 67890-123);
    
    contato1.printDados();
    contato2.printDados();
    contato3.printDados();
    contato4.printDados();

    return 0;
}
