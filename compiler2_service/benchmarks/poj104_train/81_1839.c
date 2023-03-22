#include <header.h>

int main_bench()
{
	int a[5][5],b[5]={0,1,2,3,4},m,n,i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d %d",&m,&n);
	if(m>4||n>4)
	{
		my_printf("error");
	}
	else if(m<=4&&n<=4)
	{
		temp=b[m];
		b[m]=b[n];
		b[n]=temp;
		for(i=0;i<5;i++)
		{
			my_printf("%d",a[b[i]][0]);
			for(j=1;j<5;j++)
			{
				my_printf(" %d",a[b[i]][j]);
			}
			my_printf("\n");
		}
	}
	return 0;
}