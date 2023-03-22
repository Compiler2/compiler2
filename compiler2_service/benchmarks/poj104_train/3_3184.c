#define NUM_ITER 59452

#include <header.h>

int f(int x,int a[],int y)
{
	int i,j,k;
	for(i=0;i<y;i++)
	{
		if(x==a[i])
		    return i;
		if(i>=y-1)
		    return -1;
	}
}
int main_bench()
{
	int i,x,y,n,k;
	my_scanf("%d %d",&n,&k);
	int*a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		x=f(a[i],a,n);
		y=f(k-a[i],a,n);
		if(x!=y&&x!=-1&&y!=-1)
		{
		    my_printf("yes\n");
		    break;
		}
		if(i>=n-1)
		    my_printf("no\n");
	}
	free(a);
	return 0;
}