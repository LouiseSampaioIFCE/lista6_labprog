#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int matricula;
} Professor;

typedef struct
{
    char nomeDisciplina[50];
    Professor prof;
} Disciplina;

void exibirDisciplina(Disciplina *disciplina);

int main()
{
    Disciplina disciplina;

    printf("Digite o nome da disciplina: ");
    fgets(disciplina.nomeDisciplina, sizeof(disciplina.nomeDisciplina), stdin);
    disciplina.nomeDisciplina[strcspn(disciplina.nomeDisciplina, "\n")] = '\0'; 

    printf("Digite o nome do professor: ");
    fgets(disciplina.prof.nome, sizeof(disciplina.prof.nome), stdin);
    disciplina.prof.nome[strcspn(disciplina.prof.nome, "\n")] = '\0';

    printf("Digite a matricula do professor: ");
    scanf("%d", &disciplina.prof.matricula);

    exibirDisciplina(&disciplina);

    return 0;
}

void exibirDisciplina(Disciplina *disciplina)
{
    printf("\nDisciplina: %s\n", disciplina->nomeDisciplina);
    printf("Professor: %s\n", disciplina->prof.nome);
    printf("Matricula do Professor: %d\n", disciplina->prof.matricula);
}
