#define NUM_ITER 966116

#include <header.h>

int main_bench()
{
	int i,j,c,A,B;
	char a[100],b[100];
	my_scanf("%s %s",a,b);
	A=strlen(a);
	B=strlen(b);
	if(A!=B)
	{
		my_printf("NO");
	}
	else
	{
		for(i=0;i<A;i++)
		{
			for(j=0;j<A;j++)
			{
				if(a[i]==b[j])
				{
					b[j]='0';
					break;
				}
			}
		}
		c=0;
		for(i=0;i<A;i++)
		{
			if(b[i]!='0')
			{
				c=1;
				break;
			}
			else
			{
				c=0;
			}
		}
		if(c==1)
		{
			my_printf("NO");
		}
		else
		{
			my_printf("YES");
		}
	}
	return 0;
}