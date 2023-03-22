#define NUM_ITER 31847

#include <header.h>



int mysort(void *a, void *b)
{
	return *(int *)a - *(int *)b;
}

int main_bench()
{
	int in[100];
	int num;
	int tmp;
	my_scanf("%d", &num);
	int count = 0;
	while(num--)
	{
		my_scanf("%d",&tmp);
		if(tmp % 2)
		{
			in[count] = tmp;
			++count;
		}
	}
	qsort(in,count,sizeof(int),mysort);
	for(tmp = 0; tmp < count - 1; ++tmp)
	{
		my_printf("%d,", in[tmp]);
	} 	
	my_printf("%d", in[count - 1]);
	return 0;

}


