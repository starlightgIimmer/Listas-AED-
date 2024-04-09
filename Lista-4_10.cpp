Questão 10: Escreva uma função que procure o valor N no vetor criado acima.
Retorne a posição do valor N no vetor e retorne quantas pesquisas foram feitas?
Você utilizou busca sequencial, busca binária ou busca com sentinela? Por quê?

  Neste caso foi utilizada a busca linear ou sequencial, pois com um número tão pequeno
de elementos, o custo computacional de uma busca linear é baixo e geralmente mais 
eficiente do que algoritmos mais complexos, como a busca binária. Além disso, ela possui
mais eficiência em pequenos conjuntos de dados não ordenados.
  
#include <iostream>

using namespace std;

pair <int, int> BuscarN(int x, int t, int a[])
{
    int pesquisas = 0;
    int i = 0;
    
    while(i<t && a[i] != x)
        i++;
        pesquisas++;
    return make_pair((i == t) ? -1 : i, pesquisas);
}

int main()
{
    const int u = 10;
    int v[u];
    cout<<"Insira os elementos do vetor: ";
    for (int i = 0; i < u; i++) 
    {
        cin >> v[i];
    }
    
    int N;
    cout<<"Insira o valor procurado: ";
    cin>>N;
    
    pair<int, int> resultado = BuscarN(N, u, v);
    if (resultado.first != -1) 
    {
        cout << "O valor " << N << " foi encontrado na posição " << resultado.first << ".";
        cout << "Número de pesquisas realizadas: " << resultado.second;
    } else 
    {
        cout << "O valor " << N << " não foi encontrado no vetor.";
        cout << "Número de pesquisas realizadas: " << resultado.second;
    }
    
    return 0;
}
