Questão 2: Escreva um programa que ordene o vetor vet criado no exercício
anterior.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    const int n = 5;
    vector<int> vet {7, 2, 45, 23, 76};
    for (const auto& num : vet) 
    {
        cout << num << " ";
    }
    cout<<"\n";

    
    sort(vet.begin(), vet.end());
    for (const auto& num : vet) 
    {
        cout << num << " ";
    }
    cout;
 
    return 0;
    
}    
