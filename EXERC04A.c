#include <stdio.h>

int main(void)
{
    int A = 0, B = 0, C = 0, X = 0;

    printf("Insira o valor de A: ");
    scanf( "%d", &A);

    printf("Insira o valor de B: ");
    scanf( "%d", &B);

    printf("Insira o valor de D: ");
    scanf( "%d", &C);
 
    if (C < B) {
        X = B;
        B = C;
        C = X;
    }
    if (B < A) {
        X = A;
        A = B;
        B = X;
    }
    if (C < A) {
        X = A;
        A = B;
        B = C;
        C = X;
    }

    printf("A....: %d\n", A);
    printf("B....: %d\n", B);
    printf("C....: %d\n", C);

    
    return(0);
}