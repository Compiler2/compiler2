#include <header.h>

int max(int a[],int n)
{
	int i,j=0,t;
	for (i=0;i<n;i++)
		if (*(a+j)<*(a+i))
			j=i;
	if (j!=0)
	{
		t=*(a+j);
		*(a+j)=*(a+0);
		*(a+0)=t;
	}
	return(*a);
}
int main_bench()
{
	int i,n,num[100]={0};
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%d",&num[i]);
	my_printf("%d\n",max(num,n));
	my_printf("%d\n",max(num+1,n-1));
}
