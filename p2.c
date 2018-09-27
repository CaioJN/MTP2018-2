/*.P1.c*/
/*Caio José Nogueira Machado*/
/*11811EEL003*/
#include <stdio.h>

int main()
{
	int opcao, dec = 0, hex = 0, bin = 0, oct = 0, total = 0, potenc = 1;
	char convert[100];
	
	printf("Escolha uma opcao de conversao:\n\n 1 - Binario para decimal.\n 2 - Binario para hexadecimal.");
	printf("\n 3 - Hexadecimal para decimal. \n 4 - Hexadecimal para binario. \n 5 - Decimal para binario. \n 6 - Decimal para hexadecimal.");
	printf("\n 7 - Octal para decimal.\n 8 - Decimal para octal.\n");
	scanf("%d", &opcao);
	
	if(opcao == 1)
	{
		printf("Digite o numero: ");
		scanf("%d", &bin);
		while(bin > 0) 
		{
		
	        total += bin % 10 * potenc;
    	    bin    = bin / 10;
   			potenc = potenc * 2;

    }
		dec = total;
		printf("O numero convertido eh: %d", dec);
	}
	
	else if(opcao == 2)
	{
		printf("Digite o numero: ");
		scanf("%d", &bin);
		while(bin > 0) 
		{
			
        	total += bin % 10 * potenc;
        	bin    = bin / 10;
	        potenc = potenc * 2;
	
    	}
		hex = total;
		
		printf("O numero convertido eh: %x", hex);
	}
	
	else if(opcao == 3)
	{
		printf("Digite o numero: ");
		scanf("%x", &hex);
		printf("O numero convertido eh: %d", hex);
	}
	
	else if(opcao == 4)
	{
		printf("Digite o numero: ");
		scanf("%x", &hex);
		itoa(hex, convert, 2);
		
		
		
		printf("O numero convertido eh: %s", convert);
	}
	
	else if(opcao == 5)
	{
		printf("Digite o numero: ");
		scanf("%d", &dec);
		itoa(dec, convert, 2);
		
		printf("O numero convertido eh: %s", convert);
	}
	
	else if(opcao == 6)
	{
		printf("Digite o numero: ");
		scanf("%d", &dec);
		printf("O numero convertido eh: %x", dec);
	}
	
	else if(opcao == 7)
	{
		printf("Digite o numero: ");
		scanf("%o", &oct);
		printf("O numero convertido eh: %d", oct);
	}
	
	else if(opcao == 8)
	{
		printf("Digite o numero: ");
		scanf("%d", &dec);
		printf("O numero convertido eh: %o", dec);
	}
	else
		printf("Numero invalido, seu buro do crlh\nfoi mal me exaltei XD");
	return 0;
	}
