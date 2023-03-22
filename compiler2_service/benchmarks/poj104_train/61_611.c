#define NUM_ITER 5669

#include <header.h>

int main_bench(){
	int n,x,j,l,k;
	int i=1;
	int a[10000];
	my_scanf("%d",&n);
	while(i<=n)
	{
		my_scanf("%d",&x);
		a[0]=1;
		a[1]=1;
		if(x==1||x==2)
			my_printf("1");
		else
		{
			j=2;
		    while(j<x)
			{
			    a[j]=a[j-1]+a[j-2];
		        j++;
			}
			my_printf("%d\n",a[j-1]);
		}
		i++;
	}
	return 0;
}