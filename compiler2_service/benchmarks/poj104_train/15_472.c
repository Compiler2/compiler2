#define NUM_ITER 462

#include <header.h>

int a[1000][1000];
int main_bench()
{	
	int n,i,j;
	int m1=0,n1=0,m2=0,n2=0,s=0;

    my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			my_scanf("%d",&a[i][j]);
		}	
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0 && a[i][j+1]==0 && a[i+1][j]==0)
			{
		     m1=i;
			 n1=j;
			}
		}
					   		
	} 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0 && a[i-1][j]==0 && a[i][j-1]==0)
			{
		     m2=i;
			 n2=j;
			}
		}
					   		
	} 

	s=(m2-m1-1)*(n2-n1-1);
	my_printf("%d\n",s);		  
	return 0;
}