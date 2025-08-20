#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n1, n2, n3, n4, n5;
    int temp;
    bool mustStop = false;

    printf("Digite 5 valores: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    while (mustStop == false) // repete até estar em ordem
    {
        mustStop = true; 
        // se nenhuma troca acontecer, continua true e o loop para

        if (n1 > n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
            mustStop = false;
        }

        if (n2 > n3)
        {
            temp = n2;
            n2 = n3;
            n3 = temp;
            mustStop = false;
        }

        if (n3 > n4)
        {
            temp = n3;
            n3 = n4;
            n4 = temp;
            mustStop = false;
        }

        if (n4 > n5)
        {
            temp = n4;
            n4 = n5;
            n5 = temp;
            mustStop = false;
        }
    }
    printf("\nNums em ordem crescente: %d %d %d %d %d\n", n1, n2, n3, n4, n5);

    return 0;
}
