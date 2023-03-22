#define NUM_ITER 1487024

#include <header.h>

int main_bench()
{
	int i,k,j;
	char a[101],*p[101];
	*p=a;

	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			if(k==1)
			continue;
			
			else
			{
				my_printf("%c",a[i]);
				k=1;
			}
		}
		else
		{
			k=0;my_printf("%c",a[i]);
		}
	}
	
}
