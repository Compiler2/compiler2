#define NUM_ITER 1244574

#include <header.h>

int main_bench()
{
	char c[100];
	int n,i,j,t;
	gets(c);
	n=strlen(c);
	t=n;
	for(i=n-1;i>=0;i--)
		if(c[i]==' ')
		{
			for(j=i+1;j<t;j++)
				my_printf("%c",c[j]);
            t=i;
            my_printf(" ");
		}
	for(j=0;j<t;j++)
		my_printf("%c",c[j]);
	my_printf("\n");
}