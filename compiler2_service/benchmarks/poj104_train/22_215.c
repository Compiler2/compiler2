#include <header.h>

int main_bench()
{
	unsigned i,t,a[300],j=1;
	char c;
	my_scanf("%d",&a[0]);
	for(i=1;;i++)
	{
		my_scanf("%c",&c);
		if(c==10)break;
		else 
		{
			my_scanf("%d",&a[j]);
			j++;
		}
	}
	if(i==1)my_printf("No");
	else 
	{
		t=a[0];
		for(i=0;i<j;i++)if(a[i]>t)t=a[i];
		for(i=0;i<j;i++)if(a[i]==t)a[i]=0;
		t=a[0];
		for(i=0;i<j;i++)if(a[i]>t)t=a[i];
		if(t==0)my_printf("No");
		else my_printf("%d",t);
	}
}
