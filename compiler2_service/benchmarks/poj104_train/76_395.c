#include <header.h>

int main_bench()
{
	int n;
	int i,j;
	my_scanf("%d",&n);
	int num[20002]={0};
	int a,b;
	int max=0,min=10000;
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a,&b);
		if(min>a)min=a;
		if(max<b)max=b;
		for(j=2*a;j<=2*b;j++)
			num[j]=1;
	}
	int total=1;
	for(i=2*min;i<=2*max;i++)
	{
		total=total*num[i];
	}
	if(total==0)my_printf("no\n");
	else
		my_printf("%d %d\n",min,max);
	return 0;
}