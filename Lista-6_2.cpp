Questão 2: Escreva um programa solicite ao usuário uma sequência de
caracteres sem limite de máximo de tamanho e realize as seguintes
operações usando uma pilha:
  a) Imprimir o texto na ordem inversa;
  b) Verificar se o texto é um palíndromo, ou seja, se a string é escrita
da mesma maneira de frente para trás e de trás para frente. Ignore
espaços e pontos.

#include <iostream>
#include <stack>
#include <string>

using namespace std;

void
imprimirInverso (string & texto)
{
  stack < char >pilha;
for (char c:texto)
	{
	  pilha.push (c);
	}

  cout << "O texto na ordem inversa se torna: ";
  while (!pilha.empty ())
	{
	  cout << pilha.top ();
	  pilha.pop ();
	}
  cout << "\n";
}

bool ehLetra(char c)
{
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

char Minuscula(char c) 
{
    if (c >= 'A' && c <= 'Z') 
    {
        return c + 32;
    }
    return c;
}

bool Palindromo(const string & texto)
{
  stack <char>pilha;
  
  string textoLimpo;
    for (char c : texto) 
    {
        if (ehLetra(c)) 
        {
            textoLimpo += Minuscula(c);
            pilha.push(Minuscula(c));
        }
    }
  
  string textoInvertido;

  while (!pilha.empty ())
	{
	  textoInvertido += pilha.top ();
	  pilha.pop ();
	}
  return textoLimpo == textoInvertido;
}

int main ()
{
  string texto;
  cout << "Insira o texto: ";
  getline(cin, texto);

  imprimirInverso (texto);

  if (Palindromo (texto))
	{
	  cout << "O texto é palíndromo.";
	}else
	{
	  cout << "O texto não é palíndromo.";
	}

  return 0;
}
