#include <header.h>


int panduan (int n ,int m)
{
	if(n>4 || n<0 || m<0 || m>4)
		return(0);
	else if(n>=0 && n<=4 && m>=0 && m<=4)
		return(1);
	else return(2);
}

int main_bench()
{
	int a[5][5];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	int n,m;
	my_scanf("%d %d",&n,&m);
	int t[5];
	if(panduan(n,m)==1)
	{
		for(i=0;i<5;i++)
		{
			t[i]=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=t[i];
		}
		for(i=0;i<5;i++)
		{
			my_printf("%d",a[i][0]);
		     for(j=1;j<5;j++)
			 {
			      my_printf(" %d",a[i][j]);
			 }
			 my_printf("\n");
		}
	}
	else if(panduan(n,m)==0)
		my_printf("error\n");
}