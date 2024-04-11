Questão 8: Faça um programa que leia um valor N. Este N será o tamanho de
um vetor X[N]. A seguir, leia cada um dos valores de X, encontre o maior
elemento deste vetor e a sua posição dentro do vetor, mostrando esta
informação.

#include <iostream>

using namespace std;

int BuscaMaiorValor(int a[], int tam_vet)
{
    int maiorValor = 0;
    
    for(int i=0; i<tam_vet; i++)
    {
        if(a[i]>maiorValor)
        {
            maiorValor = a[i];
        }
    }

    return maiorValor;
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
