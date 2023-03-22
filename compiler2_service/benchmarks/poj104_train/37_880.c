#include <header.h>

int main_bench()
{
	char c[100];
	int t,i,j,k,l;
	my_scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		my_scanf("%s",c);
		l=strlen(c);
		for(j=0;j<l;j++)
		{
			for(k=0;k<l;k++)
			{
				if(c[k]==c[j]&&k!=j) break;
			}
			if(k==l)
			{
				my_printf("%c\n",c[j]);
				break;
			}
			if(j==l-1) my_printf("no\n");
		}
	}
	return 0;
}

