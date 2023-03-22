#define NUM_ITER 333

#include <header.h>

int main_bench()
{
	int n,m,i,j,k;
	int yao[300][300];
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
        for(j=0;j<m;j++)
		{
           my_scanf("%d",&yao[i][j]);
		}
	}
  for(i=n;i<300;i++)
	{
        for(j=0;j<300;j++)
		{
           yao[i][j]=00;
		}
	}
  
	for(k=0;k<=n+m-2;k++)
	{   
		
		

		  for(i=0;i<=k;i++)
		  {
			 if(yao[i][k-i]!=00)
			 {
			   my_printf("%d\n",yao[i][k-i]);
			 }
		  }
	
	
		


	}
	return 0;
}