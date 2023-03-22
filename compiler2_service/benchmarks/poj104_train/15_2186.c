#define NUM_ITER 515

#include <header.h>

int main_bench()
{
int **pp;
int n,i,j,k=0,t=0,b,c,area;
my_scanf("%d",&n);
pp=(int **)malloc(n*sizeof(int *));
for(i=0;i<n;i++)
pp[i]=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		my_scanf("%d",&pp[i][j]);
	}
for(i=1;i<n-1;i++)
	{
	for(j=1;j<n-1;j++)
	{
		if(pp[i-1][j]-pp[i][j]==255&&pp[i][j-1]-pp[i][j]==255)
		{
		k=i;
		t=j;
		}
		if(pp[i][j+1]-pp[i][j]==255&&pp[i+1][j]-pp[i][j]==255)
		{
		b=i;
		c=j;
		}
	}
	}
area=(b-k-1)*(c-t-1);
my_printf("%d\n",area);
for(i=0;i<n;i++)
free(pp[i]);
free(pp);
return 0;
}
