#define NUM_ITER 214499

#include <header.h>

int g(int c[5][5],int v,int u)
{
	int b[1][5],i;
		if(v>=0&&v<5&&u>=0&&u<5)
		{   
			for(i=0;i<5;i++) 
			{    
			 b[0][i]=c[v][i];
		     c[v][i]=c[u][i];
			 c[u][i]=b[0][i];
			}
			 return(1);
		}
        else return(0);
}
int main_bench()
{   
	int a[5][5],i,j,m,n;   
	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
		my_scanf("%d",&m);
		my_scanf("%d",&n);
		g(a,m,n);
		if(g(a,m,n)==0)my_printf("error");
		else if(g(a,m,n)==1)
			for(i=0;i<5;i++)
	{	
			for(j=0;j<5;j++)
		{
			if(j/4==0)my_printf("%d ",a[i][j]);
			else if(j/4==1)my_printf("%d\n",a[i][j]);
			}
	}
}