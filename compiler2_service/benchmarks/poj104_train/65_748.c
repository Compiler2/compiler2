#define NUM_ITER 40412

#include <header.h>

int main_bench()
{
	int a=0,b=0,c=0,m,n,i,p;
	my_scanf("%d",&p);
	for (i=1;i<=p;i++)
	{
		my_scanf("%d%d",&m,&n);
		if(m==n){c++;}else
		{
			if((n==m+1)||((n==0)&&(m==2))){a++;}else
			{
				b++;
			}
		}
	}
	if(a==b){my_printf("Tie");}else
		{
			if(a>b){my_printf("A");}else
			{my_printf("B");}
		}

    return 0;
}