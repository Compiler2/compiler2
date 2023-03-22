#include <header.h>

int main_bench()
{
	int n,m,a[5][5],flag=0;
	int i,j,k;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
		my_scanf("%d%d",&n,&m);
		if(n>=0&&n<=4&&m>=0&&m<=4)
			flag=1;
		if(flag==0)
			my_printf("error\n");
		else
		{
			for(i=0;i<5;i++)
			{k=i;
			if(i==n)k=m;			
			if(i==m)k=n;
			for(j=0;j<4;j++)
				my_printf("%d ",a[k][j]);
			my_printf("%d\n",a[k][4]);}
			
		}
		return 0;
		
}