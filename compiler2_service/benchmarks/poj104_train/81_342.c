#define NUM_ITER 231027

#include <header.h>

int p(int x[5][5],int y,int z)
{
	int u,i,temp;
	if(y>=0&&y<=4&&z>=0&&z<=4)
	{
		u=1;
		for(i=0;i<5;i++)
		{
			temp=x[y][i];
			x[y][i]=x[z][i];
			x[z][i]=temp;
		}
	}
	else u=0;
	return u;
}
int main_bench()
{
	int a[5][5],b,c,i,j,d,w=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
		my_scanf("%d %d",&b,&c);
		d=p(a,b,c);
		if(d==1)
		{
		for(i=0;i<5;i++)
		   for(j=0;j<5;j++)
		   {
			   if(j==4)my_printf("%d",a[i][j]);
			   else
			   my_printf("%d ",a[i][j]);
			   w++;
			   if(w==5)
				   my_printf("\n");
			   if(w==10)my_printf("\n");
			   if(w==15)my_printf("\n");
			   if(w==20)my_printf("\n");
		   }
		}
		else my_printf("error");
}