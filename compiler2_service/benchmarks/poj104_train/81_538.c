#include <header.h>

int i,j,w;
int n,m;
int a[5][5];
int main_bench()
{
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&n,&m);
	f(n,m,a[5][5]);
	if(w==0) my_printf("error\n");
	if(w==1)
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
		{
			if(j==0) my_printf("%d",a[i][j]);
			else my_printf(" %d",a[i][j]);}
			my_printf("\n");
		}
}
int f()
{int x,t;
	if(n>4||m>4) w=0;
	else
	{
		w=1;
		for (x=0;x<5;x++)
		{
			
			t=a[n][x];
			a[n][x]=a[m][x];
			a[m][x]=t;
		}

	}
	return w;
}
