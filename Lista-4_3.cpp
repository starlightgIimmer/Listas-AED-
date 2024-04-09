Questão 3: Escreva uma função pesqseq(int val) que procura o valor val no vetor
usando pesquisa sequencial e retorna a posição em que ele foi encontrado, ou -1 se não
está no vetor.

#include <iostream>

using namespace std;

int PesqSeq(int val, int N, int a[])
{
    int i = 0;
    
    while (i<N && a[i] != val)
        i++;
    return (i == N) ? -1 : i;
}
int main(void)
{
    const int m = 8;
    int v[m] = {2, 5, 7, 9, 1, 3, 4, 6};
    
    cout<<"Busca de 9 = "<< PesqSeq(9, m, v);
    cout<<"Busca de 2 = "<< PesqSeq(2, m, v);
    cout<<"Busca de 8 = "<< PesqSeq(8, m, v)

    return 0;
}
