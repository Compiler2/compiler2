#define NUM_ITER 1

#include <header.h>

int c(int x,int k)
{
	int sum,i=2,j=0,m=1;
sum=x+k;
while(i<=x)
{if((sum*x)%(x-1)==0)
{sum=k+sum*x/(x-1);
i=i+1;
}
else 
{m=m+1;
j=j+1;}
if(j)
{sum=(m)*x+k;
i=2;
j=0;}
}

return(sum);
}

int main_bench()
{int n,k,g;
	my_scanf("%d %d",&n,&k);
	g=c(n,k);
	my_printf("%d",g);
}