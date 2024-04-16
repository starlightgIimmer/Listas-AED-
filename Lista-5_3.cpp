Questão 3: Considere a seguinte estrutura:
struct pessoa{
int Matricula;
char Nome[30];
float Nota;
};
Faça uma função que dado um array de tamanho N dessa estrutura, ordene
o array pelo campo escolhido pelo usuário. A ordenação deve utilizar o
método Merge Sort.
que???
#include <iostream>
#include <vector>

using namespace std;

struct pessoa
{
    int Matricula;
    char Nome[30];
    float Nota;
};

void merge(struct pessoa arr[], int p, int q, int r, int escolha) 
{
    int n1 = q - p + 1;
    int n2 = r - q;
    
    struct pessoa L[n1], R[n2];
    
    for(int i = 1; i<n1, i++)
    {
        L[i] = arr[p + i - 1];
    }
    
    for(int j = 1; i<n2; j++)
    {
        R[j] = arr[q+j]
    }
    
    i=0;
    j=0;
    k = p;
    
    while(i < n1 && j < n2)
    {
        if (escolha ==1 ? L[i].Matricula<= R[j].Matricula)
        {
            then arr[k]=L[i];
                i =i + 1;
        }
        else
    }
}

int main()
{
    int N;
    cout<<"Digite o tamanho do vetor: ";
    cin>> N;
    cout<<"\n";
    
    string nomes[N];
    cout<<"Insira os elementos do vetor: ";
    for (int i = 0; i < N; i++) 
    {
        cin >> nomes[i];
    }
    
    cout << "Os elementos do vetor são: ";
    for (int i = 0; i < N; ++i) 
    {
        cout << nomes[i]<<" ";
    }
    
    selectionSort(nomes, N);
    cout << "\nNomes depois da ordenação: ";
    for (const string& nome : nomes) 
    {
        cout << nome << " ";
    }

    return 0;
}
