#define NUM_ITER 493

#include <header.h>

int main_bench()
{
    int sz[100][100];
    int a,b,i,j,u,x,k,l;
	int e=0,f=0;
	char c='+',d;
    my_scanf("%d,%d",&a,&b);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			my_scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		x=sz[i][0];
		k=0;l=0;
		for(j=0;j<b;j++)
		{
		    if(sz[i][j]>x)
			{
			    x=sz[i][j];
			    l=i;
				k=j;
			}
		}
	    for(u=0;u<a;u++)
		{
		    if(sz[u][k]<x)
			{
			    e++;	
			}
		}
		if(e==0)
		{
			my_printf("%d%c%d\n",l,c,k);
			f=f+1;
			break;
		}
	}
	if(f==0)
	{
		my_printf("No\n");
	}
	return 0;
}
	

                   
				
			
