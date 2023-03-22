#define NUM_ITER 58561

#include <header.h>


int main_bench()
{
	int *array, n, k, i, j;
	my_scanf("%d%d",&n,&k);
	array=(int*)malloc(sizeof(int)*n);

	for (i=0;i<n;i++)
		my_scanf("%d",array+i);
	for(i=0;i<n-1;i++)
		for(j=i+i;j<n;j++)
			if (array[i]+array[j]==k)
			{
				my_printf("yes");
				free(array);
				return 0;
			}
	free(array);
	my_printf("no");
	return 0;
}
