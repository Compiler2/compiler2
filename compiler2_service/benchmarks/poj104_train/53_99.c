#define NUM_ITER 57783

#include <header.h>


int count[10000];

int main_bench()
{
	int i,j;
	int k;
	int num[1000];
	my_scanf("%d",&k);
	for(i=0; i<k; i++)
		my_scanf("%d", &num[i]);
	for(i=0; i<k; i++)
	{
		if(count[num[i]]==0)
		{
			count[num[i]]=1;
			my_printf("%d",num[i]);
			break;
		}
	}
	for(; i<k; i++)
	{
		if(count[num[i]]==0)
		{
			count[num[i]]=1;
			my_printf(",%d",num[i]);
		}
	}

	return 0;
}