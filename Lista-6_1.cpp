Questão 1: Escreva um programa que recebe duas listas encadeadas de
inteiros e efetue os seguintes passos:
  a) Verifique se as listas estão ordenadas;
  b) Ordene as listas, caso não estejam ordenadas;
  c) Mescle os elementos da segunda lista na primeira, mantendo a
ordenação na lista final.
#include <iostream>

using namespace std;

struct No 
{
    int data;
    No* next;
    
    No(int d) : data(d), next(nullptr) {}
};

void insertEnd(No*& head, int data) {
    No* novoNo = new No(data);
    if (head == nullptr) {
        head = novoNo;
        return;
    }
    No* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = novoNo;
}

void printList(No* head) 
{
    while (head != nullptr) 
    {
        cout << head->data << " ";
        head = head->next;
    }
}

bool verifOrdem(No* head) 
{
    while (head != nullptr && head->next != nullptr) 
    {
        if (head->data > head->next->data) {
            return false;
        }
        head = head->next;
    }
    return true;
}

void Ordenar(No*& head) 
{
    if (head == nullptr || head->next == nullptr) 
    {
        return;
    }
    
    No* current = head;
    No* index = nullptr;
    int temp;

    while (current != nullptr) 
    {
        index = current->next;

        while (index != nullptr) 
        {
            if (current->data > index->data) 
            {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
}

No* Mesclar(No* first, No* second) 
{
    if (first == nullptr) return second;
    if (second == nullptr) return first;

    if (first->data < second->data) {
        first->next = Mesclar(first->next, second);
        return first;
    } else {
        second->next = Mesclar(first, second->next);
        return second;
    }
}

int main() 
{
    No* Lista1 = nullptr;
    No* Lista2 = nullptr;

    insertEnd(Lista1, 5);
    insertEnd(Lista1, 10);
    insertEnd(Lista1, 4);

    insertEnd(Lista2, 8);
    insertEnd(Lista2, 9);
    insertEnd(Lista2, 7);

    cout << "Lista 1: ";
    printList(Lista1);
    cout << "\nLista 2: ";
    printList(Lista2);
    cout<<"\n";

    if (!verifOrdem(Lista1)) 
    {
        cout << "A lista 1 não está ordenada. Ordenada:\n";
        Ordenar(Lista1);
    }

    if (!verifOrdem(Lista2)) 
    {
        cout << "\nA lista 2 não está ordenada. Ordenada:\n";
        Ordenar(Lista2);
    }

    cout << "Listas ordenadas:\n";
    cout << "Lista 1: ";
    printList(Lista1);
    cout << "\nLista 2: ";
    printList(Lista2);

    No* mergedList = Mesclar(Lista1, Lista2);

    cout << "Listas mescladas: ";
    printList(mergedList);

    No* temp;
    while (mergedList != nullptr) 
    {
        temp = mergedList;
        mergedList = mergedList->next;
        delete temp;
    }

    return 0;
}
