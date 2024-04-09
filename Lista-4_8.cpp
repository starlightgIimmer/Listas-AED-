Questão 8: Faça um programa que leia um valor N. Este N será o tamanho de
um vetor X[N]. A seguir, leia cada um dos valores de X, encontre o maior
elemento deste vetor e a sua posição dentro do vetor, mostrando esta
informação.

*a posicao fica 0
  
#include <iostream>

using namespace std;

int BuscaMaiorValor(int a[], int m)
{
    int inicio;
    int fim = m - 1;
    int maiorValor = a[0];
    int posicao = 0;
    
    while(inicio <= fim)
    {
        int meio = (inicio + fim) / 2;
        
        if(a[meio] > maiorValor)
        {
            maiorValor = a[meio];
            posicao = meio;
        }
        
        if (a[meio] > a[fim]) 
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
    
    int posicaoMaiorValor = BuscaMaiorValor(X, N);
    cout<<"O elemento do vetor que possui maior valor está na posição "<<posicaoMaiorValor<<".";
    
    return 0;
}
