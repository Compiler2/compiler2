#define NUM_ITER 1301560

#include <header.h>


int main_bench()
{
	int n,p,i,l;
	char a[200];
	
	gets (a);
	l=strlen(a);
	p=0; 
	
	
	for (i=0;i<=l-1;i++)
	{
    	if (a[i]==' '&&(p==0))
		{
			my_printf(" ");
			p=1;
			
		}
        else if (a[i]==' '&&(p==1))
		{
			continue;
		}
		else 
		{
			my_printf("%c",a[i]);
			p=0;
			continue;
		}

	}
	
	
	
	
	return 0;
}