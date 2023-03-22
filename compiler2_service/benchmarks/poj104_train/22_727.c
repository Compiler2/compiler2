#include <header.h>

int main_bench()
{
	int a,b=0,c,i;
	char x;
	
		my_scanf("%d",&a);
		my_scanf("%c",&x);
		if(x==44)
		for(i=1;i<=300;i++)
		{
			my_scanf("%d",&c);
			if(c>a)
			{
				b=a;
				a=c;
			}
			if(c==a)
			{
				a=a;
				b=b;
			}
			if(a>c&&c>=b)
			{
				a=a;
				b=c;
			}
			if(c<b)
			{
				a=a;
				b=b;
			}
		my_scanf("%c",&x);
		if(x!=44)
			break;
		}
		if(b!=0)
		    my_printf("%d",b);
		if(b==0)
			my_printf("No");
		return 0;
} 