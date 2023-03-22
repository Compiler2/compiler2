#define NUM_ITER 1088238

#include <header.h>

int main_bench()
{
	char c[1000];
	int n,i,j,k;
	gets(c);
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]!=' ') my_printf("%c",c[i]);
		else if(c[i]==' ') 
		{
			if(c[i-1]!=' ') my_printf(" ");
		}
	}
	my_scanf("%d",&i);
	return 0;
}