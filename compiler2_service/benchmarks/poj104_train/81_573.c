#define NUM_ITER 228369

#include <header.h>

void trans(int m, int n)
{

	int a[5][5];
	int i,j;
	int t;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	}
	my_scanf("%d %d",&m,&n);
	if(n>4 || m>4)
	my_printf("error\n");
	else
	{
	for(j=0;j<5;j++)
	{
		t=a[m][j];
		a[m][j]=a[n][j];
		a[n][j]=t;
	}
    for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{my_printf("%d ",a[i][j]);}
		my_printf("%d\n",a[i][j]);
	}
	}
}

int main_bench()
{
	int m,n;
	trans(m,n);
	return 0;
}
