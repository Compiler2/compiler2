#define NUM_ITER 1844069

#include <header.h>



int main_bench()
{
	int a,b=0,c;
	char d;
	my_scanf("%d",&a);
	for(;;)
	{
		d=getchar();
		if(d!=',')
			break;
		else
		{
			my_scanf("%d",&c);
			if(c>a)
			{
				b=a;
				a=c;
			}
			else if(c<a&&c>b)
				b=c;
			else
				continue;
		}
	}
	if(b==0)
		my_printf("No");
	else 
		my_printf("%d",b);
return 0;
}


