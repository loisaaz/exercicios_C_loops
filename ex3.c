int main() 
{
    int num, fatorial = 1, i = 1;
    
    printf("\n\tdigite um número: ");
    scanf("%d", &num);

    while (num >= 0)
    {
        fatorial = 1; 
        for (i = 1; i <= num; i++)
        
        // Dentro do while, o fatorial precisa ser reiniciado senão ele acumula valores do cálculo anterior.
        {
            fatorial *= i;
        }
        printf("\n\tO fatorial de %d é %2d\n", num, fatorial); 
        
        printf("\n\tdigite um número: ");
        scanf("%d", &num);
        
    }
    
    printf("\n\tUm número negativo foi digitado, encerrando programa...");
    
    return 0;
}
