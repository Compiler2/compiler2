#include <header.h>

int main_bench() 
{ 
	int n, m, i, s=0;
    while(1)
	{
		s=0;
	my_scanf("%d%d", &n, &m);
    if(n==0)
		break;
	if(n==1)
		my_printf("1\n");
	else 
	{
		for (i=2; i<=n; i++)
		s=(s+m)%i;    
		my_printf ("%d\n", s+1);
	}
	
	
	}
	return 0;
}