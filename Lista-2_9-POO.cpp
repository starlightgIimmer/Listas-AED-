9 - Crie um programa orientado a objetos que cadastre alunos da disciplina de
AED para facilitar a vida do professor nos lançamentos e consultas. Nesse
programa deve ser possível cadastrar cada aluno pelo nome, matricula, idade,
semestre e curso que está fazendo.

#include <iostream>
#include <string>

using namespace std;

class Aluno 
{
    private:
    string nome;
    int matricula, idade, semestre;
    string curso;

    public:
    Aluno(string nome, int matricula, int idade, int semestre, string curso) : nome(nome), matricula(matricula), idade(idade), semestre(semestre), curso(curso) 
    {}

    string getNome() 
    {
        return nome;
    }

    int getMatricula() 
    {
        return matricula;
    }
    
    int getIdade() 
    {
        return idade;
    }
    
    int getSemestre()
    {
        return semestre;
    }
    
    string getCurso()
    {
        return curso;
    }

    void setNome(string novoNome) 
    {
        nome = novoNome;
    }

    void setMatricula(int novaMatricula) 
    {
        matricula = novaMatricula;
    }
    
    void setIdade(int novaIdade)
    {
        idade = novaIdade;
    }
    
    void setSemestre(int novoSemestre)
    {
        semestre = novoSemestre;
    }
    
    void setCurso(string novoCurso) 
    {
        curso = novoCurso;
    }
};

int main() 
{
    Aluno aluno("Pedro", 12345678, 20, 2, "Engenharia de Redes");
    cout << "Nome: " << aluno.getNome() << ", Matrícula: " << aluno.getMatricula()<<", Idade: "<<aluno.getIdade()<<", Semestre: "<<aluno.getSemestre()<< ", Curso: "<< aluno.getCurso();
    aluno.setNome("Gabriel");
    aluno.setMatricula(87654321);
    aluno.setCurso("Geologia");
    cout << "\nNome: " << aluno.getNome() << ", Matrícula: " << aluno.getMatricula() <<", Idade: "<<aluno.getIdade()<<", Semestre: "<<aluno.getSemestre()<< ", Curso: " << aluno.getCurso();

    return 0;
}
