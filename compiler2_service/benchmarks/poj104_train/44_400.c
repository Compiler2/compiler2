#define NUM_ITER 134943

#include <header.h>

int reverse(int n);
int main_bench()
{
	int a,n;
	for(a=0;a<=5;a++)
	{
		my_scanf("%d",&n);
		n=reverse(n);
		
	}
	return 0;
}

int reverse(int n)
{
	int a,b=1,z[10],max;
	if(n<0)
	{
		n=-n;
		my_printf("-");
	}
	if(n==0) 
	{
		my_printf("0\n");
		return 0;
	}
	for(a=0;a<=9;a++)
	{
		z[a]=n/b;
		b=b*10;
	}
    for(a=0;a<=9;a++)
	{
		b=z[a]/10;
		z[a]=z[a]-b*10;
	}
	b=0;
	for(a=9;a>=0;a--)
	{
		if((z[a-1]!=0)&&(b==0))
		{
			max=a-1;
			b=1;
			continue;
		}
		
	}
	b=0;
	for(a=0;a<=max;a++)
	{
		if((z[a]!=0)&&(b==0))
		{
			b=1;
			my_printf("%d",z[a]);
			continue;
		}
		if(b==1) my_printf("%d",z[a]);
	}
	my_printf("\n");
	return 0;
}