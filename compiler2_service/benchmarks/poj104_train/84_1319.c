#define NUM_ITER 23002

#include <header.h>

int cmp(const void * a, const void * b);
int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int *arr =  (int *) malloc (sizeof(int) * n);
	int i;
	for(i = 0; i < n; i++)
	{
		my_scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(arr[0]),cmp);
	my_printf("%d\n",arr[n-1]);
	my_printf("%d\n",arr[n-2]);
	my_scanf("%d",&n);
	return 0;
}
int cmp(const void * a, const void * b)
{
	return ((*(int*)a-*(int*)b>0)?1:-1);
}