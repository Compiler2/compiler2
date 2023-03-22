#define NUM_ITER 29192

#include <header.h>


int main_bench()
{
	char a[1000];
	int n,i,p,x;
	my_scanf("%d",&n);
	for (p=1;p<=n;p++)
	{
		my_scanf("%s",a);
my_printf("\n");
		for(i=0;a[i]>0;i++)
		{
			if(a[i]==65)
			{
				a[i]=84;
				my_printf("%c",a[i]);
			}		
			else if(a[i]==84)
			{
				a[i]=65;
				my_printf("%c",a[i]);
				
			}		
			if(a[i]==71)
			{
				a[i]=67;
				my_printf("%c",a[i]);
			}
			
			else if(a[i]==67)
			{
				a[i]=71;
				my_printf("%c",a[i]);
				
			}
			
		}	
	}
	
	
	
	return 0;
}

