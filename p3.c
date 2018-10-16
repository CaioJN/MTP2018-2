/*.P3.c*/
/*Caio José Nogueira Machado*/
/*11811EEL003*/
#include <stdio.h>

int main()
{
	int recebe = 0, i;
	char txt[256];
	
	fflush(stdin);
	gets(txt);
	
	
	for(i=0; txt[i] != '\0'; i++)
	{
		if(txt[i]>='0' && txt[i]<='9')
		{
			recebe = (recebe*10) + txt[i] - 48;
		}
	}
	printf("%i", recebe);
	
	return 0;
}
