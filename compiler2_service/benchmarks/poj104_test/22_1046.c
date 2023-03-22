#include <header.h>

int main_bench()
{
	int a,max=0,maxi=0,p=0,q=0;
	char b;
	my_scanf("%d",&a);
	b=getchar();
	while(b==',')
	{
		p++;
		if(a>max)
		{
			maxi=max;
			max=a;
		}
		else if(a==max)
			q++;
		else if(a>maxi)
			maxi=a;
		my_scanf("%d",&a);
		b=getchar();
	}
	p++;
	if(a>max)
	{
		maxi=max;
		max=a;
	}
	else if(a==max)
		q++;
	else if(a>maxi)
		maxi=a;

	if(p==1)
		my_printf("No");
	else if(p==(q+1))
		my_printf("No");
	else
	    my_printf("%d",maxi);
	return 0;
}

