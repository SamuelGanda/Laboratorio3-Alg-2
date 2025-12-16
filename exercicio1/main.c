#include <stdio.h>

int main()
{
  int inteiro = 10;
  float real = 5.2;
  char caractere = 'A';

  int *Inteiro;
  float *Real;
  char *Char;

  Inteiro = &inteiro;
  Real = &real;
  Char = &caractere;

  printf("Antes:\n");
  printf("Inteiro: %d\n", inteiro);
  printf("Real: %.2f\n", real);
  printf("Caractere: %c\n\n", caractere);

  *Inteiro = 20;
  *Real = 11.4;
  *Char = 'Z';

  printf("Depois;\n");
  printf("Inteiro: %d\n", inteiro);
  printf("Real: %.2f\n", real);
  printf("Caractere: %c\n\n", caractere);

  return 0;
}    