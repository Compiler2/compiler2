#define NUM_ITER 206376

#include <header.h>

int main_bench()
{
	int a[5][5];
	int i,j,m,k,counter=0,s,n;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	for(n=0;n<5;n++)
	{
		m=a[n][0];k=0;
		for(j=1;j<5;j++)
		{

			if(a[n][j]>m)	
             {
	             m=a[n][j]; 
				 k=j;
             }       
			
		}
		s=a[0][k];
		for(i=1;i<5;i++)
		{
			if(a[i][k]<s)
			{
				s=a[i][k];
			}
		}
		if(s==m)
		{
			my_printf("%d %d %d\n",n+1,k+1,m);
			counter++;
		}
	}
	if(counter==0)
	{
		my_printf("not found\n");
	}
	return 0;
}