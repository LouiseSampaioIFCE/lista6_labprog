#include <stdio.h>

typedef struct
{
    float nota1;
    float nota2;
    float media;
} Aluno;

void calcularMedia(Aluno *aluno);

int main()
{
    Aluno aluno;

    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);

    calcularMedia(&aluno);

    printf("Media: %.2f\n", aluno.media);

    return 0;
}

void calcularMedia(Aluno *aluno)
{
    aluno->media = (aluno->nota1 + aluno->nota2) / 2.0;
}
