#define NUM_ITER 911787

#include <header.h>

int main_bench()
{
	char s[300],a[100],b[100];
	int i,j,n,m1,m2,x=-1,y=0;
	my_scanf("%s%s%s",s,a,b);
	n=strlen(s);
	m1=strlen(a);
	m2=strlen(b);
	for(i=0;i<=n-m1;i++)
	{
		if(s[i]==a[0])
		{
			y=1;
			for(j=1;j<m1;j++)
			{
				if(s[i+j]!=a[j])
				{
					y=0;
					break;
				}
			}
		}
		if(y==1)
		{
			x=i;
			break;
		}
	}
	if(x==-1)my_printf("%s\n",s);
	else 
	{
         for(i=0;i<x;i++)
			 my_printf("%c",s[i]);
		 my_printf("%s",b);
		 for(i=x+m1;i<n;i++)
			 my_printf("%c",s[i]);
		 my_printf("\n");
	}
}