#define NUM_ITER 1029822

#include <header.h>

int main_bench()
{
	char a[10000],b[10000];
	int i,j,l,h;
	my_scanf("%s%s",a,b);
	l=strlen(a);
	h=strlen(b);
	if(l!=h)
	{
		my_printf("NO");
	}
	else
	{
		for(i=0;i<l;i++)
		{
			for(j=0;j<h;j++)
			{
				if(a[i]==b[j])
				{
					b[j]=' ';
					break;
				}
			}
			if(j==h)
			{
				my_printf("NO");
				break;
			}
		}
		if(i==l)
		{
			my_printf("YES");
		}
	}
}