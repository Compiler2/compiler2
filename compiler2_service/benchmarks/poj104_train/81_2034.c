#define NUM_ITER 233460

#include <header.h>

int f(int n,int m)
{
	int a;
	if(n>=0&&n<=4&&m<=4&&m>=0) a=1;
	else a=0;
	return(a);
}

int main_bench()
{
	int a[5][5],n,i,j,m,t;
	int *p1,*p2,*p3;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&n,&m);
	p1=&n;p2=&m;
	if(f(n,m)==0) my_printf("error");
	if(f(n,m)==1) 
	{
        for(i=0,t=0;t<5;i++,t++)
		{if(i==*p1) {i=*p2;for(j=0;j<4;j++) my_printf("%d ",a[i][j]); my_printf("%d\n",a[i][4]);i=t;}
		else if(i==*p2) {i=*p1;for(j=0;j<4;j++) my_printf("%d ",a[i][j]); my_printf("%d\n",a[i][4]);i=t;}
		else {for(j=0;j<4;j++)
				my_printf("%d ",a[i][j]);
		my_printf("%d\n",a[i][4]);}
		my_printf("\n");
		}
}
}