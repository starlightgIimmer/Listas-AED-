Questão 4: Este desafio consiste em calcular 100 alturas de alunos geradas
aleatoriamente entre 1-3 metros com até duas casas decimais. Essas alturas
servirão como parâmetro para a encomendada de bebedouros de alturas
especificas para conseguir atender todas as pessoas eficientemente, da
menor até a maior. Para a programação, você deve utilizar a ordenação
BubbleSort.
  Nesse desafio deve-se mostrar todas as alturas coletadas e como saída,
deve-se mostrar todas as alturas ordenadas em ordem crescente. Além
disso, para o cálculo dos números aleatórios deve-se usar as bibliotecas e 2
comandos:

#include<time.h>

#include<stdlib.h>

srand(time(NULL));
Essa função gera um número aleatório de acordo com o tempo.

  n+rand()%k;
Essa função diz o alcance dos números sorteados: de n ate k

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void BubbleSort(float arr[], int n)
{
    bool trocou;
    for(int i = 0; i < n - 1; i++)
    {
        trocou = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1]) 
            {
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                trocou = true;
            }
        }
        
        if(!trocou)
        {
            break;
        }
    }
}

int main()
{
    srand(time(NULL));
    const int num_alunos = 100;
    float alturas[num_alunos];
    
    for(int i = 0; i<num_alunos; i++)
    {
        alturas[i]=(rand()%200 + 100)/100.0;
    }
    
    cout << "As alturas coletadas são: ";
    for (int i = 0; i < num_alunos; i++) 
    {
        cout << alturas[i] << " metros\n";
    }
    
    BubbleSort(alturas, num_alunos);
    cout<<"As alturas ordenadas são: ";
    for (int i = 0; i < num_alunos; i++) 
    {
        cout << alturas[i] << " metros\n";
    }
  return 0;
}
