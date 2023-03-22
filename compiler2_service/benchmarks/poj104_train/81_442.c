#define NUM_ITER 233659

#include <header.h>

int main_bench()
{
	int i,b[5][5],n,m,j;
	int *point;
	int change(int *p,int m,int n);
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&b[i][j]);
	my_scanf("%d %d",&m,&n);
	point=&b[0][0];
	if (change(point,m,n)==0) my_printf("error");
	else for(i=0;i<5;i++)
	{
		   for(j=0;j<5;j++)
		   {
			   if (j==0) my_printf("%d",b[i][j]);
			   else my_printf(" %d",b[i][j]);
		   }
		   my_printf("\n");
	}
}
int change(int *p,int x,int y)
{
	int z,g,temp;
	if(x>=0&&x<5&&y>=0&&y<5)
	{
		z=1;
		for(g=0;g<5;g++)
		{
			temp=*(p+g+5*x);
			*(p+g+x*5)=*(p+g+y*5);
			*(p+g+y*5)=temp;
		}
	}
	else z=0;return(z);
}