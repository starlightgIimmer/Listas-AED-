3) Diariamente nos deparamos com várias tarefas e problemas que podem ser
otimizados ou melhorados de alguma forma com programação. Pensando nisso, elabore
uma questão de algum problema que você ache relevante. Nesta resolução, deve
constar:
  - POO
  - Herança
  - Arquivos (fstream)

Desenvolver uma aplicação de gestão de contatos onde cada contato seja
representado por um objeto da classe Contato, com atributos como nome, 
telefone, e-mail, etc. Isso permite a fácil adição, remoção e busca de contatos.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Person
{
    protected:
        string name;
        string address;
    
    public:
        Person(string name, string address)
        {
            this -> name = name;
            this -> address = address;
        }
};

class Contact : public Person
{
    int phone;
    string email;
    
    public:
        Contact(int phone, string email)
        {
            this->phone = phone;
            this->email = email;
        }
        
        void getName()
        {
            return name;
        }
        
        void getAdress()
        {
            return address;
        }
        
        void getNumber()
        {
            return numer;
        }
        
        void getEmail()
        {
            return email;
        }
        
        void printContact()
    {
        cout<<"Name: "<< name;
        cout<<"\n Adress: "<< adress;
        cout<<"\nTelephone number: "<< phone;
        cout<<"\nE-Mail: "<< email;
    }
};


int main() 
{
    string namePerson, addressPerson, emailContact;
    int phoneContact;
    
    cout << "Name: ";
    cin >> namePerson;
    cout<<"\nAddress: ";
    cin << addressPerson;
    cout << "\nTelephone number: ";
    cin >> phoneContact;
    cout<<"\nE-mail: ";
    cin>> emailContact;
    cout << "\nContact data:\n";
    
    Person p1(namePerson, addressPerson);
    Contact c1(phoneContact, emailContact);
    
    Contact.printContact();

    return 0;
}
