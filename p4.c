/*.P4.c*/
/*Caio José Nogueira Machado*/
/*11811EEL003*/
#include <stdio.h>

int fun_ack(int m, int n)
{
	if(m==0)
		return n+1;
		
	else if(m>0 && n==0)
		fun_ack(m-1,1);
	
	else if(m>0 && n>0)
		fun_ack(m-1,fun_ack(m,n-1));
}

int main()
{
	int m, n;
	
	scanf("%d%d", &m, &n);
	
	printf("%d", fun_ack(m,n));
	
	return 0;
}
