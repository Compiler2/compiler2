#include <header.h>

int main_bench()
{
	int a[365],n,i,j=0,k,b[100];
	my_scanf("%d",&n);
    for(i=0;i<7;i++)
	{
		a[i]=n;
        n++;
		if(n==8) break;
	}
	k=i;
	n=1;
	for(i=k+1;i<365-k;i++)
	{
		a[i]=n;
	    n++;
		if(n==8) 
		{
			n=1;
		}
	}
	for(i=0;i<365;i++)
	{
		if(a[i]==5) 
		{
			b[j]=i+1;
			j++;
		}
	}
    for(i=0;i<100;i++)
	{
		if(b[i]==13) my_printf("1\n");
		else if(b[i]==44) my_printf("2\n");
		else if(b[i]==72) my_printf("3\n");
		else if(b[i]==103) my_printf("4\n");
		else if(b[i]==133) my_printf("5\n");
		else if(b[i]==164) my_printf("6\n");
		else if(b[i]==194) my_printf("7\n");
		else if(b[i]==225) my_printf("8\n");
		else if(b[i]==256) my_printf("9\n");
		else if(b[i]==286) my_printf("10\n");
		else if(b[i]==317) my_printf("11\n");
		else if(b[i]==347) my_printf("12\n"); 
	}
	return 0;
}