#include <header.h>

int main_bench()
{
	int n,i,j,max=1,m;
	int sz[500];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{  
		my_scanf("%d",&sz[i]);
		if(sz[i]>max&&sz[i]%2!=0)
			max=sz[i];
	}
	for(j=1;j<=max;j=j+2)
	{   
		
		if(j==max)
				my_printf("%d",j);
		else
		{
		for(m=0;m<n;m++)
		{
		     if(sz[m]==j)
				my_printf("%d,",j);
		}
		}
	}
			
return 0;
}