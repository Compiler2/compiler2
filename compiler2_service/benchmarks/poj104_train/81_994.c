#define NUM_ITER 226826

#include <header.h>

main_bench()
{
	int n,m,t,i,j,s;
	int exist(int n,int m);
	int a[5][5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
	          my_scanf("%d",&a[i][j]);
	my_scanf("%d%d",&n,&m);
	t=exist(n,m);
	if(t==1)
	{
		for(j=0;j<5;j++)
		   s=a[n][j],a[n][j]=a[m][j],a[m][j]=s;
		for(i=0;i<5;i++)
		{
		    my_printf("%d",a[i][0]);
			for(j=1;j<5;j++)
			my_printf(" %d",a[i][j]);
			my_printf("\n");
		}
	}
	else my_printf("error");
}

int exist(int n,int m)
{
	int t=0;
	if(n<=4 && m<=4)
	t=1;
	return(t);
}