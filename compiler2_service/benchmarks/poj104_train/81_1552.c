#define NUM_ITER 217165

#include <header.h>


int main_bench()
{
	int change(int an[5][5],int a,int b);
	
	int x,y,a[5][5],i,j,c,t;
	
	 for(i=0;i<5;i++)
	 {
		 for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	 }
		
	my_scanf("%d%d",&x,&y);
	c=change(a[5][5],x,y);
	if(c==0)
		my_printf("error");
	if(c==1)
	{
	for(j=0;j<5;j++)
	{  t=a[x][j];
	  a[x][j]=a[y][j];
	  a[y][j]=t;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
	
	my_printf("%d ",a[i][j]);
	my_printf("%d\n",a[i][4]);
	}
	}
}
	
int change(int an[5][5],int a,int b)
{
	int c;

	if(a<0||a>4||b<0||b>4)
		return c=0;
	else
		return c=1;
}
