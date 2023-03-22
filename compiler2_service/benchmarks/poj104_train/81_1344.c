#include <header.h>


int a[5][5];

void jiaohuan(int n,int m)
{
		int i,temp;
		for(i=0;i<5;i++)
		{
			temp=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=temp;
		}
}

int main_bench()
{
	int i,j,n,m;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++) my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&n,&m);
	if(n>4||n<0||m>4||m<0) my_printf("error\n");
	else 
	{jiaohuan(n,m);
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++) my_printf("%d ",a[i][j]);
		my_printf("%d\n",a[i][4]);
	}
	}
	return 0;
}
