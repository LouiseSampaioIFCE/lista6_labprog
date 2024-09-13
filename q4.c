#include <stdio.h>

typedef struct
{
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcularMedia(Aluno alunos[], int quantidade);

int main()
{
    Aluno alunos[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Aluno %d - Digite a primeira nota: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Aluno %d - Digite a segunda nota: ", i + 1);
        scanf("%f", &alunos[i].nota2);
    }

    calcularMedia(alunos, 3);

    for (int i = 0; i < 3; i++)
    {
        printf("Aluno %d - Media: %.2f\n", i + 1, alunos[i].media);
    }

    return 0;
}

void calcularMedia(Aluno alunos[], int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2.0;
    }
}
