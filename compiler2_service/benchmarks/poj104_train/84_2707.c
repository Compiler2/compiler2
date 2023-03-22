#define NUM_ITER 52934

#include <header.h>

int max(int a[100],int n,int m)
{
	int y,i;
	if(a[0]==m)  y=a[1];
    else y=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]==m)  continue;
		if(a[i]>y)   y=a[i];
	}
	return y;
}
int main_bench()
{
	int a[100],n,i,m;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
    m= max(a,n,0);
    my_printf("%d\n",m);
	m= max(a,n,m);
    my_printf("%d\n",m);
	return 0;
}
    


	
