#include <header.h>

int main_bench()
{
int i,j,k,n,x[100];
my_scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
    my_scanf("%d",&x[i]);
	if(i==0)
		my_printf("%d",x[i]);
	else
	{
	   for(j=0,k=0;j<=i-1;j++)
		   if(x[j]!=x[i])
			   k++;
	   if(k==i)
	   my_printf(",%d",x[i]);
	}
}
my_printf("\n");
}