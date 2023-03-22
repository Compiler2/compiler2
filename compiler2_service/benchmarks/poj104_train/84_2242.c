#define NUM_ITER 56773

#include <header.h>

int main_bench()

{
	int  sz[100];
    int  i,N,max1,max2;

	my_scanf("%d",&N);
	for( i=0;i<N;i++)
		my_scanf("%d",&sz[i]);
	max1=sz[0]>sz[1]?sz[0]:sz[1];
	max2=sz[0]>sz[1]?sz[1]:sz[0];
	for(i=2;i<N;i++)
	{
		if(sz[i]>max1)
		{
			max2=max1;
			max1=sz[i];
		}
		else if(sz[i]>max2)
			max2=sz[i];
	}
	my_printf("%d\n",max1);
	my_printf("%d\n",max2);
return 0;
}
