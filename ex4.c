#include <stdbool.h>

int main() 
{
    int senha = 895623;
    int tentativa;
    int entrada;
    bool acesso = false;
    
    printf("\t===BEM VINDO(A) AO SISTEMA===\n");
    printf("\nPara continuar, digite sua senha.\n Você têm 3 tentativas.");
    
    for (tentativa = 1; tentativa <= 3; tentativa++)
    {
        printf("\nSENHA:");
        scanf("%d", &entrada);
        
        if (senha != entrada)
        {
            printf("“Acesso negado”");
        }
        else
        {
            acesso = true;
            printf("“Acesso liberado”");
            break;
        }
    }
    
    if (!acesso)
    {
        printf("\n“Limite máximo de tentativas excedido. Usuário bloqueado!”");
    }
    
    return 0;
}
