#define NUM_ITER 1331698

#include <header.h>

int main_bench()
{
	char a[30],d='\n';
	int i,b,k=0,f=1;
	char *c[30];
	gets(a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]>47&&a[i]<58)
		{c[k]=&a[i];k++;f=0;}
		else 
		{
		if(f==0)
		{c[k]=&d;k++;}
			f++;
		}

	}
	for(i=0;i<k;i++)
	my_printf("%c",*c[i]);

}