#define NUM_ITER 569

#include <header.h>

int main_bench()
{
	int n[1000][1000],num,i,j,p[200],k=0;
	my_scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++) my_scanf("%d",&n[i][j]);
	}
	int w=0;
	for(i=0;i<(num-1);i++)
	{
		for(j=0;j<(num-1);j++)
		{
			if(n[i][j]==0&&n[i][j+1]==0) break;
			else if(n[i][j]==0&&n[i][j+1]!=0)
			{
				p[w]=j;
				w++;
			}
		}
	}
	for(i=0;i<w-1;i=i+2)
	{
		k=k+(p[i+1]-p[i]-1);
	}
	my_printf("%d",k);
}



