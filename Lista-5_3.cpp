Questão 3: Considere a seguinte estrutura:
struct pessoa{
int Matricula;
char Nome[30];
float Nota;
};
Faça uma função que dado um array de tamanho N dessa estrutura, ordene
o array pelo campo escolhido pelo usuário. A ordenação deve utilizar o
método Merge Sort.

#include <iostream>
#include <string>

using namespace std;
    
struct pessoa 
{
    int Matricula;
    string Nome;
    float Nota;
};

void merge(pessoa arr[], int l, int m, int r, int opcao) {
    int n1 = m - l + 1;
    int n2 = r - m;

    pessoa L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) 
    {
        if (opcao == 1 ? L[i].Matricula <= R[j].Matricula : L[i].Nota <= R[j].Nota) 
        {
            arr[k] = L[i];
            i++;
        } else 
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) 
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(pessoa arr[], int l, int r, int opcao) 
{
    if (l < r) 
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m, opcao);
        mergeSort(arr, m + 1, r, opcao);

        merge(arr, l, m, r, opcao);
    }
}

void printArray(pessoa arr[], int size) 
{
    for (int i = 0; i < size; i++)
        {
        cout << "Matricula: " << arr[i].Matricula << ", Nome: " << arr[i].Nome << ", Nota: " << arr[i].Nota;
        }    
}

int main() 
{
    int n;
    cout << "Digite o tamanho do array: ";
    cin >> n;

    pessoa arr[n];
    cout << "\nPreencha os dados: ";
    for (int i = 0; i < n; i++) 
    {
        cout << "Matricula: ";
        cin >> arr[i].Matricula;
        cout << "Nome: ";
        cin >> arr[i].Nome;
        cout << "Nota: ";
        cin >> arr[i].Nota;
    }

    int opcao;
    cout << "Escolha qual será o parâmetro de ordenação: (1 - Matricula, 2 - Nota): ";
    cin >> opcao;

    mergeSort(arr, 0, n - 1, opcao);

    cout << "Os dados ordenados: ";
    printArray(arr, n);

    return 0;
}
