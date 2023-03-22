#define NUM_ITER 107458

#include <header.h>


int main_bench()
{
	int a[5][5],b[5][5]={0},c[5][5]={0};
	int i,j,k,num=0;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		my_scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	{
		for(k=0;k<5;k++)
		{
			if (a[i][j]>=a[i][k])  b[i][j]++;
			if (a[i][j]<=a[k][j])  c[i][j]++;
		}
		if (b[i][j]==5&&c[i][j]==5)
		{
			my_printf("%d %d %d",i+1,j+1,a[i][j]);
			num++;
		}
	
	}
	if (num==0)  my_printf("not found");

return 0;
	
	
}