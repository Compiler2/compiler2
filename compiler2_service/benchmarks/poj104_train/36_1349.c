#define NUM_ITER 1019599

#include <header.h>

int main_bench()
{
	char c1[50]={0},c2[50]={0};
	int i,j,l1,l2;
	my_scanf("%s %s",c1,c2);
	l1=strlen(c1);
	l2=strlen(c2);
	if(l1!=l2)
	{
		my_printf("NO\n");
		return 0;
	}
	for(i=0;i<l1;i++)
	{
		for(j=0;j<l2;j++)
		{
			if(c1[i]==c2[j])
			{
				c2[j]=0;
				break;
			}
			if(j==l2-1)
			{
				my_printf("NO\n");
				return 0;
			}
		}
	}
	my_printf("YES\n");
	return 0;
}
