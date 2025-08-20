#include <stdio.h>

int main()
{

    float x[21], y[21], z[21]; 
    int cont, num;

    printf("\nQuantos números quer ler? (max é 20): ");
    scanf("%d", &num);

    if (num > 20)
    {
        printf("\nO número máximo aceitado é 20.\n");
        return 0;
    }

    for (cont = 0; cont < num; cont++)
    {
        printf("Digite X[%d]: ", cont);
        scanf("%f", &x[cont]);
    }

    for (cont = 0; cont < num; cont++)
    {
        printf("Digite Y[%d]: ", cont);
        scanf("%f", &y[cont]);
    }

    for (cont = 0; cont < num; cont++)
    {
        z[cont] = x[cont] * y[cont];
    }

    printf("\nVetor Z: ");
    for (cont = 0; cont < num; cont++)
    {
        printf("%.2f ", z[cont]);
    }

    printf("\n");

    return 0;
}
