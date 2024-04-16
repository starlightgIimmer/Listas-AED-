Questão 5: Faça um programa que leia n nomes e ordene-os pelo tamanho
utilizando o algoritmo Selection Sort.

#include <iostream>
#include <vector>

using namespace std;

void selectionSort(string arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].length() < arr[menor].length()) 
            {
                menor = j;
            }
        }
        if (menor != i) {
            swap(arr[i], arr[menor]);
        }
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
