#define NUM_ITER 30311

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,i,j;
	char z[21];
	my_scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		my_scanf("%s",z);
		b=isalpha(z[0]);
		j=strlen(z);
		c=1;
		if((b==0)&&(z[0]!='_'))
		{
			my_printf("no\n");
			continue;
		}
		for(d=1;d<j;d++)
		{
			e=isalnum(z[d]);
			if((e==0)&&(z[d]!='_'))
			{
				c=0;
				break;
			}
		}
		if(c)
		{
			my_printf("yes\n");
		}
		else
		{
			my_printf("no\n");
		}
	}
	return 0;
}