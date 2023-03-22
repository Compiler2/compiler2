#define NUM_ITER 44128

#include <header.h>


int main_bench()
{
	int n=0,start[1000],end[1000];
	char c=',';
	while(c!='\n')
	{
		my_scanf("%d%c",&start[n],&c);
		n++;
	}

	int i;
	for(i=0;i<=n-1;i++)
		my_scanf("%d%c",&end[i],&c);

	int time=0;
	for(i=0;i<=n-1;i++)
		if(time<end[i])
			time=end[i];

	int member[1000],j;

	for(i=0;i<=time-1;i++)
		member[i]=0;

	for(i=0;i<=n-1;i++)
		for(j=start[i];j<end[i];j++)
			member[j-1]++;

	int max=0;
	for(i=0;i<=time-1;i++)
		if(max<member[i])
			max=member[i];

	my_printf("%d %d\n",n,max);
}
