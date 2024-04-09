Questão 4: Escreva um método pesqbin(int val) que procura o valor val no vetor
usando pesquisa binária e retorna a posição em que ele foi encontrado, ou -1
se não está no vetor.

#include <iostream>

using namespace std;

int PesqBin(int x, int N, int a[])
{
    int L, R, m;
    L = 0;
    R = N - 1;
    while(L < R)
    {
        m = (L + R) / 2;
        if(a[m] < x)
            L = m + 1;
        else
            R = m;
    }
    return (x == a[R] ) ? R : -1;
}
int main(void)
{
    const int m = 8;
    int v[m] = {2, 5, 7, 9, 1, 3, 4, 6};
    
    cout<<"Busca de 9 = "<< PesqBin(9, m, v);
    cout<<"\nBusca de 5 = "<< PesqBin(5, m, v);
    cout<<"\nBusca de 8 = "<< PesqBin(8, m, v);

    return 0;
}
