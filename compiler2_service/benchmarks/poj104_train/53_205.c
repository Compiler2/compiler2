#define NUM_ITER 9034

#include <header.h>

int main_bench()
{
int a,i,n;
int b[100];
int c;
for(i=0;i<101;i++)
b[i]=0;
my_scanf("%d",&a);
c=a;
for (i=0;i<a;i++)
{
	my_scanf("%d",&b[i]);
	
}
for (i=0;i<a;i++)
{
	if(i!=0)
	{
		for(n=i-1;n>=0;n--)
		{
			if (b[i]==b[n])
			{
				b[i]=0;
				c--;
			}
		}
	}
	
}
for(i=0;i<a;i++)
{
	if(b[i]!=0)
	{
		if (i==0)
			my_printf("%d",b[i]);
		else
			my_printf(",%d",b[i]);
	}
}
my_scanf("%d",&b[0]);
}

