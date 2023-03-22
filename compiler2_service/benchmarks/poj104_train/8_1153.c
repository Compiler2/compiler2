#define NUM_ITER 1959

#include <header.h>

void changeplace(int n,int a[])
{
	int i,j,x;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>=a[j+1])
			{
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
		
	}
}
main_bench()
{
	int n1,n2,k;
	my_scanf("%d%d",&n1,&n2);
	int *p=(int*)malloc(n1*sizeof(int));
	int *q=(int*)malloc(n2*sizeof(int));
	for(k=0;k<n1;k++)
	my_scanf("%d",&p[k]);
	for(k=0;k<n2;k++)
	my_scanf("%d",&q[k]);
	changeplace(n1,p);
	changeplace(n2,q);
	for(k=0;k<n1;k++)
	my_printf("%d ",p[k]);
	for(k=0;k<n2-1;k++)
	my_printf("%d ",q[k]);
	my_printf("%d",q[n2-1]);
	
	
}