Questão 3: Escreva um programa que simule o controle de uma pista de
decolagem de aviões em um aeroporto. Neste programa, o usuário deve ser
capaz de realizar as seguintes tarefas:
  a) Listar o número de aviões aguardando na fila de decolagem;
  b) Autorizar a decolagem do primeiro avião da fila;
  c) Adicionar um avião à fila de espera;
  d) Listar todos os aviões na fila de espera;
  e) Listar as características do primeiro avião da fila.

#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Aviao
{
    string modelo;
    string companhia;
    int n_voo;
};

class PistaDeVoo
{
    private:
    queue<Aviao>Pista;
    
    public:
    
    void AddPlane(const Aviao& aviao)
    {
        Pista.push(aviao);
        cout<<"Avião registrado.";
    }
    
    void AuthorizePlane()
    {
        if(Pista.empty())
        {
            cout<<"Não há aviões para decolar.";
        }else
        {
            Aviao aviao = Pista.front();
            Pista.pop();
            cout<<"Decolagem autorizada para o avião "<< aviao.modelo<<" da companhia "<< aviao.companhia<<" e número de voo "<<aviao.n_voo;
        }
    }
    
    void NumberPlanes()
    {
        cout<<"Número de aviões aguardando autorização para decolar: "<<Pista.size();
    }
    
    void ListPlanes()
    {
        cout<<"Aviões esperando: ";
        while (!Pista.empty()) 
        {
            Aviao aviao = Pista.front();
            cout << "Modelo: " << aviao.modelo << ", companhia: " << aviao.companhia << " e número do voo: "<< aviao.n_voo;
            Pista.pop();
        }
    }
    
    void FrontPlane() 
    {
        if (Pista.empty()) 
        {
            cout << "Nenhum aviao aguardando na fila de decolagem.";
        } else 
        {
            Aviao aviao = Pista.front();
            cout << "As características do primeiro avião na fila de decolagem: ";
            cout << "Modelo: " << aviao.modelo << ", Companhia: " << aviao.companhia << ", Número de voo: " << aviao.n_voo;
        }
    }
    
};

int main()
{
    PistaDeVoo pista;

    while (true) 
    {
        cout << "\nO que deseja fazer?\n";
        cout << "1. Listar número de aviões aguardando na fila de decolagem;\n";
        cout << "2. Autorizar decolagem do primeiro avião da fila;\n";
        cout << "3. Adicionar avião a fila de espera;\n";
        cout << "4. Listar todos os aviões na fila de espera;\n";
        cout << "5. Listar as caracteristicas do primeiro avião na fila;\n";
        cout << "6. Sair.";

        int escolha;
        cin >> escolha;

        switch (escolha) 
        {
            case 1:
                pista.NumberPlanes();
                break;
           
            case 2:
                pista.AuthorizePlane();
                break;
            
            case 3:
                {
                    Aviao aviao;
                    cout << "Informe o modelo do avião: ";
                    cin >> aviao.modelo;
                    cout << "Informe a companhia do avião: ";
                    cin >> aviao.companhia;
                    cout << "Informe o número do voo: ";
                    cin >> aviao.n_voo;
                    pista.AddPlane(aviao);
                }
                break;
            
            case 4:
                pista.ListPlanes();
                break;
            
            case 5:
                pista.FrontPlane();
                break;
            
            case 6:
                cout << "Saindo...";
                return 0;
            
            default:
                cout << "Opção inválida.";
        }
    }

    
    return 0;
}
