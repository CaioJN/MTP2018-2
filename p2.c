/*.P2.c*/
/*Caio José Nogueira Machado*/
/*11811EEL003*/
#include <stdio.h>

int ct(int num)
{
	int i=0,j,k;
	if (num%2==0 && num >0)
		i++;
	for (i, j=0; j<num; i++)
	{
		if (num%2==0)
			num = num/2;
		if (num%2==1)
			num--;
	}
	return i;
}

int pot(int exp)
{
	int k, l;
	for(k=1,l=1; k<=exp; l*=2, k++);
	return l;	
}

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
		printf("%d", dec);
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
		
		printf("%x", hex);
	}
	
	else if(opcao == 3)
	{
		printf("Digite o numero: ");
		scanf("%x", &hex);
		printf("%d", hex);
	}
	
	else if(opcao == 4)
	{
		int j,num=0, nbases=0, base=0;
			printf("\n  Digite o numero em hexadecimal: ");
			scanf("%s", &num); getchar();
			nbases = ct(num);
			base = pot(nbases-1);
			printf("\n  Numero convertido em binario: ");
			for(j=0; j<nbases; j++)
			{
				if (num >= base)
				{
					printf("1");
					num-=base;
				}
				else printf("0");
				base /= 2;
			}
		
	}
	
	else if(opcao == 5)
	{
		int j,num=0, nbases=0, base=0;
			printf("\n  Digite o numero em decimal: ");
			scanf("%d", &num); getchar();
			nbases = ct(num);
			base = pot(nbases-1);
			printf("\n  Numero convertido em binario: ");
			for(j=0; j<nbases; j++)
			{
				if (num >= base)
				{
					printf("1");
					num-=base;
				}
				else printf("0");
				base /= 2;
			}
	}
	
	else if(opcao == 6)
	{
		printf("Digite o numero: ");
		scanf("%d", &dec);
		printf("%x", dec);
	}
	
	else if(opcao == 7)
	{
		printf("Digite o numero: ");
		scanf("%o", &oct);
		printf("%d", oct);
	}
	
	else if(opcao == 8)
	{
		printf("Digite o numero: ");
		scanf("%d", &dec);
		printf("%o", dec);
	}
	else
		printf("Numero invalido, seu buro do crlh\nfoi mal me exaltei XD");
	return 0;
	}
