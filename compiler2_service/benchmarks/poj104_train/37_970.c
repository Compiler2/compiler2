#define NUM_ITER 36147

#include <header.h>

int main_bench()
{
	int t,i,k,m;
	char zfc[100001];
	my_scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		my_scanf("%s",zfc);
        for(k=0;zfc[k]!=0;k++)
		{
			for(m=0;zfc[m]!=0;m++)
			{
				if(zfc[m]==zfc[k]&&m!=k)
				{
					break;
				}
			}
			if(zfc[m]==0)
			{
				my_printf("%c\n",zfc[k]);
				break;
			}
		}
		if(zfc[k]==0)
		{
			my_printf("no\n");
		}
	}
	return 0;
}