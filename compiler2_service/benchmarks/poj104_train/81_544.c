#define NUM_ITER 217874

#include <header.h>

int putout(int n,int m);
int main_bench()
{
	int i,j,n,m,return1;
	int str[5][5]={0},turn[5];
	int *p;
	p=str[0];
	for(i=0;i<25;i++)
	{
		my_scanf("%d",p++);
	
	}
	my_scanf("%d%d",&n,&m);
	
	return1=putout(n,m);
	if(return1==0) my_printf("error\n");
	else 
	{
		for(j=0;j<5;j++)
		{
			turn[j]=str[m][j];
			str[m][j]=str[n][j];
			str[n][j]=turn[j];
		}
		for(i=0;i<5;i++)
		{	
			for(j=0;j<4;j++)
				my_printf("%d ",str[i][j]);
			my_printf("%d\n",str[i][4]);

		}
	}
return 0;
}
int putout(int n,int m)
{
	int z;
	if(n<=4&&n>=0&&m<=4&&m>=0) z=1;
	else z=0;
return (z);
}
