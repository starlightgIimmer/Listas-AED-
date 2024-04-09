Questão 5: Escreva um método pesqsent(int val) que procura o valor val no
vetor usando pesquisa com sentinela e retorna a posição em que ele foi
encontrado, ou -1 se não está no vetor.

#include <iostream>

using namespace std;

int PesqSeq(int val, int N, int a[])
{
    int i = 0;
    a[N] = val;
    
    while (a[i] != val)
        i++;
    return (i == N) ? -1 : i;
}
int main(void)
{
    const int m = 8;
    int v[m + 1] = {2, 5, 7, 9, 1, 3, 4, 6};
    
    cout<<"Busca de 9 = "<< PesqSeq(9, m, v);
    cout<<"\nBusca de 2 = "<< PesqSeq(2, m, v);
    cout<<"\nBusca de 8 = "<< PesqSeq(8, m, v);

    return 0;
}
