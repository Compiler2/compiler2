#define NUM_ITER 206451

#include <header.h>

int main_bench()
{
	int (*a)[5],i,j,k,m,n,f(int (*a)[5],int n,int m);
	a=(int (*)[5])malloc(5*5*sizeof(int));
	for(j=0;j<5;j++)
		for(i=0;i<5;i++)
			my_scanf("%d",*(a+j)+i);
	my_scanf("%d %d",&n,&m);
	k=f(a,n,m);
	if(k==0)
		my_printf("error");
	else
		for(j=0;j<5;j++)
		{
			for(i=0;i<4;i++)
				my_printf("%d ",*(*(a+j)+i));
			my_printf("%d\n",*(*(a+j)+4));
		}
}
int f(int (*a)[5],int n,int m)
{
	int t,i,j;
	if(n>4||m>4)
		return(0);
	else
	{
		for(i=0;i<5;i++)
		{
			t=*(*(a+n)+i);
			*(*(a+n)+i)=*(*(a+m)+i);
			*(*(a+m)+i)=t;
		}
		return(1);
	}
}
