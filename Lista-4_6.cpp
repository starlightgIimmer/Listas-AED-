Questão 6: Escreva um código que verifique quantas pesquisas são feitas em
cada tipo de pesquisa. Qual é a que faz menos pesquisas? Qual faz mais
pesquisas?

*nao esta achando a posicao da maior pesquisa

#include <iostream>
#include <string>

using namespace std;

const int NTipoPesq = 5;
int main()
{
    string tipos_pesquisa[NTipoPesq] = {"tipo1", "tipo2", "tipo3", "tipo4", "tipo5"};
    int contagem_pesquisas[NTipoPesq] = {0};
    
    string TipoPesq;
    while (true) 
    {
        cout << "\nDigite o tipo de pesquisa (ou 'sair' para encerrar): ";
        cin >> TipoPesq;
        if(TipoPesq == "sair")
            break;
        
        bool encontrado = false;
        for (int i = 0; i < NTipoPesq; ++i) 
        {
            if (tipos_pesquisa[i] == TipoPesq) 
            {
                contagem_pesquisas[i]++;
                encontrado = true;
                break;
            }
        }
        if (!encontrado)
        {
            cout<<"Tipo de pesquisa inválido.";
        }
        
    }
    
    int MenorCont = contagem_pesquisas[0];
    int MaiorCont = contagem_pesquisas[0];
    for (int i = 1; i < NTipoPesq; i++)
    {
        if (contagem_pesquisas[i]<MenorCont)
        {
            MenorCont == contagem_pesquisas[i];
        }
        if (contagem_pesquisas[i]>MaiorCont)
        {
            MaiorCont == contagem_pesquisas[i];
        }
    }
    
    cout << "Tipos de pesquisa com menos pesquisas:\n";
    for (int i = 0; i < NTipoPesq; ++i) 
    {
        if (contagem_pesquisas[i] == MenorCont) 
        {
            cout << tipos_pesquisa[i] << " (" << MenorCont << " pesquisas).\n";
        }
    }

    cout << "Tipos de pesquisa com mais pesquisas:\n";
    for (int i = 0; i < NTipoPesq; ++i) 
    {
        if (contagem_pesquisas[i] == MaiorCont) 
        {
            cout << tipos_pesquisa[i] << " (" << MaiorCont << " pesquisas)\n";
        }
    }

    return 0;
}
