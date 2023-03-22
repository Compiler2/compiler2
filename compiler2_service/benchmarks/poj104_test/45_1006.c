#define NUM_ITER 886053

#include <header.h>


int main_bench()
{
	int i,j;
	char a[60],b[60];
	my_scanf("%s %s",a,b);
	for(i=0;i<=strlen(b)-strlen(a);i++)
	{
		for (j=i;j<i+strlen(a);j++)
		{
			if (a[j-i]!=b[j])
				break;
		}
		if (j==i+strlen(a))
		{
			my_printf("%d\n",i);
			break;
		}
	}
	if (i==strlen(b)-strlen(a)+1)
		my_printf("no\n");
	
	return 0;
}

