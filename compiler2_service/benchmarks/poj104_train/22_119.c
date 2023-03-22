#define NUM_ITER 1830191

#include <header.h>



int main_bench()
{
	int a[300],i,j,k,x;
	my_scanf("%d",&a[0]);
	for(i=1;getchar()==',';i++)
	{
		my_scanf("%d",&a[i]);
	}
	k=i;
	for(j=0;j<k-1;j++)
	{
		for(i=j;i<k;i++)
		{
			if(a[j]<a[i])x=a[j],a[j]=a[i],a[i]=x;
		}
	}
	for(i=1,x=-1;i<k;i++)
	{
		if(a[i]<a[0])
		{
			x=a[i];
			break;
		}
	}
	if(x==-1)my_printf("No");
	else my_printf("%d",x);
}