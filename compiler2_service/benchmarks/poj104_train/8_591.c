#define NUM_ITER 2456

#include <header.h>

int main_bench()
{
	void abc(int c[],int p);
	int m,n,i,j;
	int a[100],b[100];
	my_scanf("%d",&m);
	my_scanf("%d",&n);
	for(i=0;i<m;i++)
	my_scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	my_scanf("%d",&b[j]);
	abc(a,m);
	my_printf(" ");
	
	abc(b,n);
    
}
void abc(int c[],int p)
{
	int i,j,temp;
	for(i=0;i<p-1;i++)
	{
	for(j=0;j<p-1-i;j++)
	{
		if(c[j]>c[j+1])
		{
			temp=c[j];
		    c[j]=c[j+1];
		    c[j+1]=temp;
		}
	}
	}
	for(i=0;i<p-1;i++)
	my_printf("%d ",c[i]);
	my_printf("%d",c[i]);
	
}
