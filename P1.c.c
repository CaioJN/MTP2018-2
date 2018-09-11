/*.P1.c*/
/*Caio José Nogueira Machado*/
/*11811EEL003*/
#include <stdio.h>

int bin_to_dec(int bin)
{
    int total  = 0;
    int potenc = 1;

    while(bin > 0) 
	{
		
        total += bin % 10 * potenc;
        bin    = bin / 10;
        potenc = potenc * 2;

    }

    return total;
}

int main(void)
{
    int dec = 0;
    int bin = 0;

    printf("Entre com um inteiro (0's e 1's): ");
    scanf("%d", &bin);
	
    dec = bin_to_dec(bin);
	
	if(dec%3==0)
	{
		printf("\nEh multiplo!");	
	}
	
	else
	{
		printf("\nNao eh multiplo!");
	}

    return 0;
}
