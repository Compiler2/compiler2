#include <header.h>

int main_bench()
{
	int n,a=0,b=0,i;
	int A,B;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&A,&B);
		if(A!=B)
		{
			if(A==0)
			{
				if(B==1)
					a++;
				else
					b++;
			}
				if(A==1)
			{
				if(B==2)
					a++;
				else
					b++;
			}
					if(A==2)
			{
				if(B==0)
					a++;
				else
					b++;
			}
		}
	}
	if(a>b)
		my_printf("A");
	if(a<b)
		my_printf("B");
	if(a==b)
		my_printf("Tie");
	return 0;
}