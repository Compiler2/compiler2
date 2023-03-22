#include <header.h>

int kuso(int n,int m)
{
	if(n>=0&&n<5&&m>=0&&m<5)
		return(1);
	else 
		return(0);
}
int main_bench()
{
	int a[5][5],n,m,i,j,p,b[5];
	int kuso(int n,int m);
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
		my_scanf("%d %d",&n,&m);
	p=kuso(n,m);
	if(p==0)
		my_printf("error\n");
	else
	{	
		for(i=0;i<5;i++)
		{	
			b[i]=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=b[i];
		}
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			{
				if(j<4)
					my_printf("%d ",a[i][j]);
				else
					my_printf("%d\n",a[i][j]);
			}
	}
}
		
		


