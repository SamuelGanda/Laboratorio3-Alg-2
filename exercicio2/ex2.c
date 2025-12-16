#include <stdio.h>

int main()
{
    int n1 = 5;
    int n2 = 4;

    int *N1 = &n1;
    int *N2 = &n2;

    printf("Endereco de N1: %p\n", (void *) N1);
    printf("Endereco de N2: %p\n", (void *) N2);

    if(N1 > N2)
    {
        printf("Maior endereco: n1 (%p)\n", (void *) N1);
    }
    else if(N2 > N1)
    {
        printf("Maior endereco: n2 (%p)\n", (void *) N2);
    }
    else
    {
        printf("Os enderecos sao iguais.\n");
    }

    return 0;
}