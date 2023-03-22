#define NUM_ITER 229020

#include <header.h>

int change(int x,int y,int b[5][5])
{   
	int z,t,k;
	if(x<=4&&x>=0&&y<=4&&y>=0)
	{
       z=1;
	  for(k=0;k<=4;k++)
	  {
		  t=b[x][k];
		  b[x][k]=b[y][k];
		  b[y][k]=t;
	  } return(z);
	}
	else 
	{
		z=0;
		return(z);
	} 
}
int main_bench()
{
	int a[5][5];
	int i,j,m,n,d;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&m,&n);
	d=change(m,n,a);
    if(d==1)
	{      
		for(i=0;i<=4;i++)
		{
			for(j=0;j<=3;j++)
			{
				my_printf("%d ",a[i][j]);
			}
			my_printf("%d\n",a[i][4]);
		}
	}
	else my_printf("error\n");
}

