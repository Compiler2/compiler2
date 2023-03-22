#define NUM_ITER 241126

#include <header.h>

int main_bench()
{
	char c1[1000],c2[1000];
	int i,j,k=0,l1,l2,x[1000];
	for(i=0;i<100;i++)
		x[i]=-1;
	my_scanf("%s%s",c1,c2);
	l1=strlen(c1);l2=strlen(c2);
	if(l1!=l2)
		my_printf("NO");
	else
	{
		for(i=0;i<l1;i++)
		{
			for(j=0;j<l2;j++)
			{
				for(k=0;k<=i;k++)
				{
					if(j==x[k])
						goto loop;
				}
				if(c1[i]==c2[j])
					x[i]=j;
loop:if(1);
			}
		}
		for(i=0;i<l1;i++)
		{
			if(x[i]!=-1)
				continue;
			else
			{
				my_printf("NO");
				goto loop1;
			}
		}
		my_printf("YES");
loop1:if(1);
	}
}