#define NUM_ITER 214134

#include <header.h>

int main_bench()
{
	int f(int m,int n);
	int i,j,x,y,d[5][5],b[5];
	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
	my_scanf("%d ",&d[i][j]);}
	my_scanf("%d %d",&x,&y);
	if(f(x,y)==0)
		my_printf("error\n");
	else {for(j=0;j<5;j++)
		  {
		b[j]=d[x][j];
          d[x][j]=d[y][j];
          d[y][j]=b[j];
	}
		  for(i=0;i<5;i++)
		 {my_printf("\n");
			 for(j=0;j<4;j++)
			 {my_printf("%d ",d[i][j]);}
			 my_printf("%d",d[i][4]);}}
}
	int f(int m,int n)
	{
		int c;
		if(m<=4&&m>=0&&n<=4&&n>=0)
			c=1;
		else c=0;
		return(c);
	}

