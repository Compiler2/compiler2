#define NUM_ITER 28061

#include <header.h>

int main_bench()
{
	int t,i,j,k,l;
	char c[100];
	my_scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		my_scanf("%s",c);
		l=strlen(c);
		for(i=0;i<=l-1;i++)
		{
			for(j=0;j<=l-1;j++)
			{
				if(c[i]==c[j]&&i!=j)
					break;
			}
			if(j==l)
				break;
		}
		if(i==l)
			my_printf("no\n");
		else
			my_printf("%c\n",c[i]);
	}
	return 0;
}