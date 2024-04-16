Questão 1: Faça um programa que leia n nomes inserindo-os em uma lista
de forma ordenada utilizando a ideia do algoritmo Insertion Sort. No final,
o programa deve mostrar todos os nomes ordenados alfabeticamente.

#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<string>& arr) 
{
    int n = arr.size();
    for (int i = 1; i < n; ++i) 
    {
        string key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int N;
    cout<<"Digite o tamanho do vetor: ";
    cin>> N;
    cout<<"\n";
    
    vector<string> vetor_nomes(N);
    cout<<"Insira os elementos do vetor: ";
    for (int i = 0; i < N; i++) 
    {
        cin >> vetor_nomes[i];
    }
    
    cout << "Os elementos do vetor são: ";
    for (int i = 0; i < N; ++i) 
    {
        cout << vetor_nomes[i]<<" ";
    }
    
    insertionSort(vetor_nomes);
    cout << "\nNomes depois da ordenação: ";
    for (const string& nome : vetor_nomes) 
    {
        cout << nome << " ";
    }

    return 0;
}
