13 - Crie um programa orientado a objetos que ajude alunos do ensino
fundamental em contas matemáticas de área, volume de círculos e cubos.
O programa deve ter os seguintes métodos:
1. Cálculo do diâmetro da circunferência.
2. Cálculo da área da circunferência.
3. Cálculo da área lateral do cubo.
4. Cálculo da área total do cubo.
5. Cálculo do volume do cubo.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Calculadora
{
    private:
    const float Pi = 3.14;
    float raioCirc;
    float ladoCubo;

    float calcCompCirc() const 
    {
        return 2*Pi*raioCirc;
    }

    float calcAreaCirc() const 
    {
        return Pi*pow(raioCirc, 2);
    }

    float calcAreaLatCubo() const 
    {
        return 4*ladoCubo;
    }

    float calcAreaCubo() const 
    {
        return 6*pow(ladoCubo, 2);
    }

    float calcVolCubo() const 
    {
        return pow(ladoCubo, 3);
    }

    public:
    
    void atribuirDimCirc(float raio) 
    {
        raioCirc = raio;
    }

    void atribuirDimCubo(float lado) 
    {
        ladoCubo = lado;
    }

    void printCalcsCirc() const 
    {
        cout << "Círculo\n";
        cout << "Comprimento da circunferência: " << calcCompCirc();
        cout << "\nÁrea da circunferência: " << calcAreaCirc();
    }

    void printCalcsCubo() const 
    {
        cout << "\n\nCubo\n";
        cout << "Área lateral: " << calcAreaLatCubo();
        cout << "\nArea total: " << calcAreaCubo();
        cout << "\nVolume: " << calcVolCubo();
    }
};

int main() 
{
    Calculadora calc;
    calc.atribuirDimCirc(5);
    calc.printCalcsCirc();

    calc.atribuirDimCubo(4);
    calc.printCalcsCubo();

    return 0;
}
