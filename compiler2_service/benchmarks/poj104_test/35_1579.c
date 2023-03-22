#define NUM_ITER 542

#include <header.h>

int s[8][8];
int main_bench()
{
    int n,N,i,j,a,b,c;
	int min=100;
	int max=0;
    my_scanf("%d,%d",&n,&N);
	for(i=0;i<n;i++)
	{
		for(j=0;j<N;j++)
		{
			my_scanf("%d",&s[i][j]);
		}
	}
    for(i=0;i<n-1;i++)
	{
		for(j=0;j<N;j++)
		{
			if(s[i][j]>max)
			{
				max=s[i][j];
				a=i;
				b=j;
			}
		}
		for(c=0;c<n;c++)
		{
			if(s[c][b]<min) 
			{
				min=s[c][b];
			}
		}
			if(min==max){
				my_printf("%d+%d",a,b);
				return 0;
		}
	}
	my_printf("No");
	return 0;
}
			
