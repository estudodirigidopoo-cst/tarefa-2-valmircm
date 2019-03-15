#include <stdio.h>
#include <math.h>


int main (void)

{
	float A,B,C,X1,X2,DELTA;

	printf("Entre com o valor de A: ");
	scanf("%f",&A);
	printf("Entre com o valor de B: ");
	scanf("%f",&B);
	printf("entre com o valor de C: ");
	scanf("%f",&C);

	DELTA = pow(B, 2) - (4 * A * C);
	X1 = (-B + sqrt(DELTA)) / (2*A);
	X2 = (-B - sqrt(DELTA)) / (2*A);

	if (DELTA < 0){
	    printf("A equação não possui raizes reais\n");
	} else {
        printf("O valor de X1 é:  %.2f\n", X1);
        printf("O valor de X2 é:  %.2f\n", X2);
	}
	
	return (0);

}