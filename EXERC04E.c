#include <stdio.h>

int main (void)
{
    float A, B, X;

    printf("Entre com o valor de A: ");
	scanf("%f",&A);
	printf("Entre com o valor de B: ");
	scanf("%f",&B);

    if (A <= B)
        X = B - A;
    else
        X = A - B;

    printf("Diferença do maior para o meno é: %.2f\n", X);
    printf("A...: %.2f", A);
    printf("B...: %.2f", B);

	return (0);
}