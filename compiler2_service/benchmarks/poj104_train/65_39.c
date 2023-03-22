#include <header.h>

int main_bench()
{
	int n,i,a,b,c,A=0,B=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a,&b);
		if(a==b)
		{
			continue;
		}
		else 
		{
			if((a==2&&b==0)||(a==0&&b==2))
		{
			c=a;
			a=b;
			b=c;
		}
			if(a<b)
			{
				A++;
			}
			else
			{
				B++;
			}
		}
	}
		if(A==B)
		{
			my_printf("Tie");
		}
		else 
		{
			if(A>B)
			{
				my_printf("A");
			}
			else
			{
				my_printf("B");
			}
		}
	return 0;
}
				
