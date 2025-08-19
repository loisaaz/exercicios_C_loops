int main()
{
	int num, cont = 0, max = 0, min = 999999;
	
	printf("\n\ttecle um numero: ");
    scanf("%d", &num);
	
    while (num != 0)
    {
        cont++;
        
        printf("\n\ttecle um numero: ");
        scanf("%d", &num);
        
        if (num < min)
            min = num;
            
        if (num > max)
            max = num;
        
    }

    printf("\n\tforam digitados %d números", cont);
    printf("\n\to maior numero foi: %d\n\t e o menor foi: %d", max, min);
    
	return 0;
}
