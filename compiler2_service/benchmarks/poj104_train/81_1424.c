#include <header.h>


int exchange(int k[][5],int n,int m)
{int t,i;
	if(n<5&&m<5)
	{
		for(i=0;i<5;i++)
		{
			t=k[m][i];
			k[m][i]=k[n][i];
			k[n][i]=t;
		}		
	return 1;
	}
else
	return 0;
}

int main_bench()
{
int a[5][5],n,m,i,j,c;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		my_scanf("%d",&a[i][j]);
		my_scanf("%d%d",&n,&m);
	c=exchange(a,n,m);
	if(c==1)
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
				my_printf("%d ",a[i][j]);
				my_printf("%d",a[i][4]);
				my_printf("\n");
		}
	}
	if(c==0)
			my_printf("error");
return 0;
}

