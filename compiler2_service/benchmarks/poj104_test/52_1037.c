#include <header.h>


int main_bench()
{
	int i,n,m,num[100];
	void move(int num[100],int n);
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&num[i]);
	for(i=0;i<m;i++)
		move(num,n);
	for(i=0;i<n-1;i++)
		my_printf("%d ",num[i]);
	my_printf("%d",num[n-1]);
}
void move(int num[100],int n)
{
	int t,j;
	t=num[n-1];
	for(j=n-1;j>0;j--)
		num[j]=num[j-1];
	num[0]=t;
}