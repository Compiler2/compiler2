#include <header.h>

int main_bench()
{
	int n,i,j,t=0;
    my_scanf("%d",&n);
    for(i=1;i<=3;i++)
	{
		j=2*i+1;
		if(n%j==0) 
		{
			if(t>0) 
				my_printf(" ");
			my_printf("%d",j);
			t++;			
		}
	}
	if(t==0)
	my_printf("n");
	my_printf("\n");
}
