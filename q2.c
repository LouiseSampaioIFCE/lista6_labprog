#include <stdio.h>
#include <string.h>

typedef struct
{
    char nomePeca[50];
    int numeroPeca;
    float preco;
    int numeroPedido;
} Estoque;

void exibirEstoque(Estoque *item);

int main()
{
    Estoque item;

    printf("Digite o nome da peca: ");
    fgets(item.nomePeca, sizeof(item.nomePeca), stdin);
    item.nomePeca[strcspn(item.nomePeca, "\n")] = '\0';  

    printf("Digite o numero da peca: ");
    scanf("%d", &item.numeroPeca);

    printf("Digite o preco da peca: ");
    scanf("%f", &item.preco);

    printf("Digite o numero do pedido: ");
    scanf("%d", &item.numeroPedido);

    exibirEstoque(&item);

    return 0;
}

void exibirEstoque(Estoque *item)
{
    printf("\nInformacoes da peca:\n");
    printf("Nome: %s\n", item->nomePeca);
    printf("Numero da peca: %d\n", item->numeroPeca);
    printf("Preco: %.2f\n", item->preco);
    printf("Numero do pedido: %d\n", item->numeroPedido);
}
