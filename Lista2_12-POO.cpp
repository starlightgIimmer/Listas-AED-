12 - Você é um programador que foi contratado por uma empresa de
estacionamento rotativo de Brasília. Essa empresa está passando por algumas
dificuldades de controle dos carros que entram e saem, dificultando até a
devolução do carro para o proprietário.
Seu trabalho é construir um programa orientado a objetos em que seja
possível cadastrar os donos e os carros.
Os donos devem informar:
• Nome
• Telefone
• Marca
• Placa
• Cor

Após esse cadastro, o programa deve imprimir na tela todos os dados dos
carros cadastrados.

#include <iostream>
#include <string>

using namespace std;

class Carro 
{
    private:
    string marca;
    string placa;
    string cor;

    public:
    Carro(string marca, string placa, string cor) : marca(marca), placa(placa), cor(cor){}

    string getMarca() const 
    {
        return marca;
    }

    string getPlaca() const 
    {
        return placa;
    }
    
    string getCor() const
    {
        return cor;
    }
    

};

class Cliente
{
    private:
    string nome;
    string telefone;
    Carro carro;
    
    public:
    Cliente(string nome, string telefone, Carro carro) : nome(nome), telefone(telefone), carro(carro){}
    
    void printDados() const
    {
        cout<<"Nome: "<< nome;
        cout<<"\nTelefone: "<< telefone;
        cout<<"\nMarca do automóvel: "<< carro.getMarca();
        cout<<"\nPlaca do automóvel: "<< carro.getPlaca();
        cout<<"\nCor do automóvel: "<< carro.getCor();
    }
};

int main() 
{
    string nomeCliente, telefoneCliente, marcaCarro, placaCarro, corCarro;
    
    cout << "Nome: ";
    cin >> nomeCliente;
    cout << "Telefone: ";
    cin >> telefoneCliente;
    cout << "Marca do carro: ";
    cin >> marcaCarro;
    cout << "Placa do carro: ";
    cin >> placaCarro;
    cout << "Cor do carro: ";
    cin >> corCarro;

    Carro carro(marcaCarro, placaCarro, corCarro);
    Cliente cliente(nomeCliente, telefoneCliente, carro);

    cout << "\nDados do Cliente:\n";
    cliente.printDados();

    return 0;
}
