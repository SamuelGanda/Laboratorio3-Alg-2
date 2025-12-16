#include <stdio.h>

int main()
{
    int n1, n2;

    int *N1 = &n1;
    int *N2 = &n2;

    printf("Digite o valor de n1:\n");
    scanf("%d", &n1);

    printf("Digite o valor de n2:\n");
    scanf("%d", &n2);

    printf("Conteudo de n1: %p\n", (void *) N1);
    printf("Conteudo de n2: %p\n", (void *) N2);

    if(N1 > N2)
    {
        printf("Maior endereco pertende a n1: %d\n", *N1);
    }
    else
    {
        printf("Maior endereco pertece a n2: %d\n", *N2);
    }


    return 0;
}