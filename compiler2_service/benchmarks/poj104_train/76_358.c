#define NUM_ITER 3376

#include <header.h>

int main_bench(){
	int array[10000],i,n,ai,bi,head,tail,sum=0;
	my_scanf("%d",&n);
	for (i=0;i<10000;i++)
		array[i]=0;
	for (i=0;i<n;i++)
		{	
		my_scanf("%d%d",&ai,&bi);
		array[ai]++;
		array[bi]--;
		}
	ai=0;
	bi=0;
	while (array[ai]==0)
		ai++;
	sum=sum+array[ai];
	head=ai;
	ai++;
	while (sum>0)
		{
		sum+=array[ai];
		ai++;
		}
	tail=ai-1;
	for (i=ai;i<10000;i++)
		if (array[i]>0)
			{
			my_printf("no");
			bi=1;
			break;
			}
	if (bi==0)
		my_printf("%d %d",head,tail);
	return 0;
}