#define NUM_ITER 19622

#include <header.h>

int main_bench()
{
	int t,k,x,i,j,s[100000],y;
	char a[100000];
	my_scanf ("%d",&t);
	for (k=1;k<=t;k++)
	{
		my_scanf("%s",a);
		x=strlen(a);
		y=0;
		for (i=0;i<x;i++)
		{
			s[i]=0;
		}
		for (i=0;i<x;i++)
		{
			for (j=0;j<x;j++)
			{
				if(a[i]==a[j]) s[i]=s[i]+1;
			}
		}
		for (i=0;i<x;i++)
		{
			if (s[i]==1) 
			{
				my_printf("%c\n",a[i]);
				y=1;
				break;
			}
		}
		if (y==0) my_printf("no\n");
	}
}
