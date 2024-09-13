#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int *matriz;
    int quantidadeElementos;
    float media;
} VetorInfo;

void calcularMedia(VetorInfo *info);


void exibirMatriz(int *matriz, int quantidadeElementos);

int main()
{
    int n;
    VetorInfo info;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    info.quantidadeElementos = n;
    info.matriz = (int*)malloc(n * sizeof(int));

    if (info.matriz == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        *(info.matriz + i) = rand() % 100;  
    }

    printf("Matriz gerada:\n");
    exibirMatriz(info.matriz, info.quantidadeElementos);

    calcularMedia(&info);

    printf("Media: %.2f\n", info.media);

    free(info.matriz);

    return 0;
}

void calcularMedia(VetorInfo *info)
{
    int soma = 0;
    for (int i = 0; i < info->quantidadeElementos; i++)
    {
        soma += *(info->matriz + i);
    }
    info->media = (float)soma / info->quantidadeElementos;
}

void exibirMatriz(int *matriz, int quantidadeElementos)
{
    for (int i = 0; i < quantidadeElementos; i++)
    {
        printf("%d ", *(matriz + i));
    }
    printf("\n");
}
