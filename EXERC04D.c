#include <stdio.h>

int main (void)
{
	
    float N1, N2, N3, N4, MEDIA, EXAME;

    printf("Entre com o valor de nota 1: ");
	scanf("%f",&N1);
    printf("Entre com o valor de nota 2: ");
	scanf("%f",&N2);
    printf("Entre com o valor de nota 3: ");
	scanf("%f",&N3);
    printf("Entre com o valor de nota 4: ");
	scanf("%f",&N4);

    MEDIA = (N1 + N2 + N3 + N4) / 4;

    if (MEDIA >= 7) {
        printf("Aluno aprovado, média igual ou superior a 7.\n");
        printf("Média: %.2f\n", MEDIA);
    } else {
        printf("Aluno em exame.\nInforme a nota do exame: ");
        scanf("%f", &EXAME);
        MEDIA = (N1 + N2 + N3 + N4 + EXAME) / 5;
        if (MEDIA >= 5) {
            printf("Aluno aprovado, média final igual ou superior a 5.\n");
        } else 
            printf("Aluno reprovado, média inferior a 5.\n");

        printf("Média final: %.2f\n", MEDIA);
    }

	return (0);
}