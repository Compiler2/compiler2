#define NUM_ITER 1260302

#include <header.h>

int main_bench()
{
	char a[10000];
	int i,j=1,n=0,l,d=0;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=' ')
		{
			if(n!=0)
			{
				d++;
				n=0;
			}
			else 
				d++;
		}
		else
			if(n==0)
			{
				my_printf("%d,",d);
				n++;
				d=0;
			}
	}
	my_printf("%d",d);
}