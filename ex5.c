#include <stdio.h>

int main()
{
    // Faça um programa que leia 5 números inteiros e que os ordene em ordem crescente. 
    //Ao final imprima esses 5 números ordenados.
    
    int n1, n2, n3, n4, n5;
    
    printf("valor 1, 2, 3, 4 e 5: ");
    scanf("%d, %d, %d, %d, %d", &n1, &n2, &n3, &n4, &n5);
    
    bool mustStop = false;
    
    while(mustStop == false)
    {
    int temp; // variável temporária
    
    //  compare num1 com num2
    if (n1 > n2)
    {
        temp = n1; // guarda o valor de num1
        n1 = n2;     // agora num1 recebe o valor de num2
        n2 = temp;     // num2 recebe o valor antigo de num1 (guardado em temp)
    }

    // num2 com num3
    // num3 com num4 
    // num4 com num5
    
        
    }


    return 0;
}