#include <header.h>

int trans(int n,int m,int (*a)[5])
{
	int temp,j,i=0;
	if(0<=n&&n<=4&&0<=m&&m<=4)
	{
		for(j=0;j<5;j++)
		{
			temp=*(*(a+n)+j);
			*(*(a+n)+j)=*(*(a+m)+j);
			*(*(a+m)+j)=temp;
		}
		i=1;
	}
	return(i);
}
int main_bench()
{
	int m,n,a[5][5],t,i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",*(a+i)+j);
	my_scanf("%d%d",&n,&m);
	t=trans(n,m,a);
	if(t==0)
		my_printf("error");
	else
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			{
				if(j<4)
				my_printf("%d ",*(*(a+i)+j));
			    else
					my_printf("%d\n",*(*(a+i)+j));
			}

return 0;
}


