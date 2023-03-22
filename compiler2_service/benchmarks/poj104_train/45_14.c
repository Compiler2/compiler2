#define NUM_ITER 1158192

#include <header.h>

int main_bench()
{
	char s[50],w[50];
	char m,n;
	my_scanf("%s%s",s,w);
	int i;
	for(i=0;(m=s[i])!='\0';i++)
	{	
		for(i=0;(n=w[i])!='\0';i++)
			if(m==n) 
				my_printf("%d\n",i);
				break;
	}
	return 0;
}