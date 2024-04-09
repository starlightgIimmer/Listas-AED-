Questão 7: Faça um programa que leia um valor N. Este N será o tamanho de
um vetor X[N]. A seguir, leia cada um dos valores de X, encontre o menor
elemento deste vetor e a sua posição dentro do vetor, mostrando esta
informação.

  *ele nao esta achando a posicao correta.

#include <iostream>

using namespace std;

int BuscaMenorValor(int a[], int m)
{
    int inicio;
    int fim = m - 1;
    int menorValor = a[0];
    int posicao = 0;
    
    while(inicio <= fim)
    {
        int meio = (inicio + fim) / 2;
        
        if(a[meio] < menorValor)
        {
            menorValor = a[meio];
            posicao = meio;
        }
        
        if (a[meio] < a[fim]) 
        {
            fim = meio - 1;
        } 
        else 
        {
            inicio = meio + 1;
        }
    }
    
    return posicao;
}

int main()
{
    int N;
    cout<<"Digite o tamanho do vetor: ";
    cin>> N;
    cout<<"\n";
    
    int X[N];
    cout<<"Insira os elementos do vetor: ";
    for (int i = 0; i < N; i++) 
    {
        cin >> X[i];
    }
    
    int posicaoMenorValor = BuscaMenorValor(X, N);
    cout<<"O elemento do vetor que possui menor valor está na posição "<<posicaoMenorValor<<".";
    
    return 0;
}
