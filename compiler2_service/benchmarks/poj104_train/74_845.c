#include <header.h>

int main_bench()
{
	int m,n,i,j,k,c=0;
	my_scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		j=i;for(k=0;j>0;)k=k*10+j%10,j=j/10;if(k==i)
		{
			for(j=2;j<i;j++)if(i%j==0)break;if(j==i){if(c)my_printf(",%d",i);else my_printf("%d",i);c++;}
		}
	}
	if(c==0)my_printf("no");
}
	
