#define NUM_ITER 15221

#include <header.h>


int main_bench()
{
	int i,n,sum=0;
	char *p;
	my_scanf("%d",&n);
    p=(char *)malloc(40);
	my_scanf("%s",p);
	sum+=strlen(p);
	my_printf("%s",p);
	for(i=1;i<n;i++)
	{
		p=(char *)malloc(40);
		my_scanf("%s",p);
		sum+=strlen(p)+1;
		if(sum<80)
			my_printf(" %s",p);
		else
			if(sum==80)
			{
				my_printf(" %s\n",p);
				free(p);p=(char *)malloc(40);
				my_scanf("%s",p);
				my_printf("%s",p);
				sum=strlen(p);
				i++;
			}
			else
			{
				my_printf("\n%s",p);
				sum=strlen(p);
			}
	}
	my_printf("\n");
}