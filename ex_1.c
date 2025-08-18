#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num, div = 2;
    bool primo = true;
    
    printf("\tVerifique se o número é PRIMO\n");
    printf("\n\tDigite um número: ");
    scanf("%d", &num);
    
    if (num < 2) 
    {
        printf("\n\tO numero não é primo.");
        return 0;  // encerra o programa aqui se o número for menor que 2
    }
    
    while (div < num)
    {
        if (num % div == 0)
        {
            primo = false;
            //printf("\n\tO número não é primo.");
            break;
            
        }
        div++;
    }
    
    if (primo)
        {
            printf("\n\tO numero é primo.");
        }
        else
        {
            printf("\n\tO numero não é primo.");
        }
    
    return 0;
}
