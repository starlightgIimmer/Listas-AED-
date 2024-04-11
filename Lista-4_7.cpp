Questão 7: Faça um programa que leia um valor N. Este N será o tamanho de
um vetor X[N]. A seguir, leia cada um dos valores de X, encontre o menor
elemento deste vetor e a sua posição dentro do vetor, mostrando esta
informação.

 #include <iostream>

using namespace std;

int BuscaMenorValor(int a[], int tam_vet)
{
    int menorValor = 10000000;
    
    for(int i=0; i<tam_vet; i++)
    {
        if(a[i]<menorValor)
        {
            menorValor = a[i];
        }
    }

    return menorValor;
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
    
    int MenorValor = BuscaMenorValor(X, N);
    cout<<"O elemento do vetor que possui menor valor é "<<MenorValor<<".";
    
    return 0;
}
