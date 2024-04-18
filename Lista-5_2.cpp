Questão 2: Crie um programa que dado uma string, coloque as letras dela
em ordem decrescente usando o algoritmo Quick Sort.
#include <iostream>
#include<string>

using namespace std;

void swap(char& a, char& b)
{
    char temp = a;
    a = b;
    b = temp;
}

int Partition(string& arr, int L, int R) 
{
    char pivot = arr[R];
    int i = (L - 1);
    
    for (int j = L; j <= R - 1; j++) 
    {
        if (arr[j] >= pivot) 
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[R]);
    return (i + 1);
}

void QuickSort(string& arr, int L, int R)
{
    if(L<R)
    {
        int pi = Partition(arr, L, R);
        QuickSort(arr, L, pi - 1);
        QuickSort(arr, pi + 1, R);
    }
}

void ordemDecrescente(string& arr) 
{
    int n = arr.length();
    QuickSort(arr, 0, n - 1);
}

int main()
{
    string palavra;
    
    cout<<"Insira a palavra para ser ordenada: ";
    cin>>palavra;
    
    ordemDecrescente(palavra);
    cout<<"A palavra em ordem decrescente: "<<palavra;
    
    return 0;

}
