Questão 6: Escreva um código que verifique quantas pesquisas são feitas em
cada tipo de pesquisa. Qual é a que faz menos pesquisas? Qual faz mais
pesquisas?

#include <iostream>
#include <string>

using namespace std;

const int NTipoPesq = 5;
int main()
{
    string tipos_pesquisa[NTipoPesq] = {"tipo1", "tipo2", "tipo3", "tipo4", "tipo5"};
    int contagem_pesquisas[NTipoPesq] = {0,0,0,0,0};
    
    string TipoPesq;
    while (true) 
    {
        cout << "\nDigite o tipo de pesquisa (ou 'sair' para encerrar): ";
        cin >> TipoPesq;
        if(TipoPesq == "sair")
            break;
        if(TipoPesq=="tipo1")
        {
            contagem_pesquisas[0]++;
        }   
        if(TipoPesq=="tipo2")
        {
            contagem_pesquisas[1]++;
        }
        if(TipoPesq=="tipo3")
        {
            contagem_pesquisas[2]++;
        }
        if(TipoPesq=="tipo4")
        {
            contagem_pesquisas[3]++;
        }
         if(TipoPesq=="tipo5")
        {
            contagem_pesquisas[4]++;
        }
    }
    cout<<"A quantidade de pesquisas de tipo 1 são "<<contagem_pesquisas[0]<<"\n";
    cout<<"A quantidade de pesquisas de tipo 2 são "<<contagem_pesquisas[1]<<"\n";
    cout<<"A quantidade de pesquisas de tipo 3 são "<<contagem_pesquisas[2]<<"\n";
    cout<<"A quantidade de pesquisas de tipo 4 são "<<contagem_pesquisas[3]<<"\n";
    cout<<"A quantidade de pesquisas de tipo 5 são "<<contagem_pesquisas[4]<<"\n";
    
    int maior = contagem_pesquisas[0];
    int menor = contagem_pesquisas[0];

    if (contagem_pesquisas[1] > maior) 
    {
        maior = contagem_pesquisas[1];
    } else if (contagem_pesquisas[1] < menor) 
    {
        menor = contagem_pesquisas[1];
    }

    if (contagem_pesquisas[2] > maior) 
    {
        maior = contagem_pesquisas[2];
    } else if (contagem_pesquisas[2] < menor) 
    {
        menor = contagem_pesquisas[2];
    }

    if (contagem_pesquisas[3] > maior) 
    {
        maior = contagem_pesquisas[3];
    } else if (contagem_pesquisas[3] < menor) 
    {
        menor = contagem_pesquisas[3];
    }

    if (contagem_pesquisas[4] > maior) 
    {
        maior = contagem_pesquisas[4];
    } else if (contagem_pesquisas[4] < menor) 
    {
        menor = contagem_pesquisas[4];
    }

    cout << "A pesquisa com mais pesquisas feitas é: " << maior;
    cout << "\nA pesquisa com menos pesquisas feitas é: " << menor;

    return 0;
}
