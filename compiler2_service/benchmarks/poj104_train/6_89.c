#define NUM_ITER 26

#include <header.h>

int main_bench()
{
int *a,sum,i,k,n,m,j=0;
my_scanf("%d",&k);
for (i=1;i<=k;i++)
{
	sum=0;
	my_scanf("%d%d",&m,&n);
	a=(int*)malloc(sizeof(int)*(n*m));
	for(j=0;j<n*m;j++)
	{
		my_scanf("%d",a+j);
		if ((j+1<=n)||(j>(n*m-n-1))||((j+1)%n==1)||((j+1)%n==0))
			sum+=*(a+j);
	}
         free(a);
	my_printf("%d\n",sum);
}

}
