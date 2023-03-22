#define NUM_ITER 215867

#include <header.h>

int a[5][5];
int m;
int n;
int pan(int m,int n)
{
	int c[5];
	int q;
	if(m<=4&&m>=0&&n<=4&&n>=0)
	{
		int c[5];
		int q;
		for(q=0;q<=4;q++)
		{
			c[q]=a[m][q];
			a[m][q]=a[n][q];
			a[n][q]=c[q];
		}
		return 1;
	}
	else
	{
        return 0;
	}
}
int main_bench()
{
	int i,j;
	int k;
	int pan(int m,int n);
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&m,&n);
	k=pan(m,n);
    if(k==0)
	{
		my_printf("error");
	}
	else
	{
		for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			my_printf("%d",a[i][j]);
			if(j!=4)
			{
				my_printf(" ");
			}
			else
			{
				my_printf("\n");
			}
		}
	}
	}
	return 0;
}