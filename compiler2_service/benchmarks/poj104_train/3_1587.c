#define NUM_ITER 23829

#include <header.h>



int mysort(void *a, void *b)
{
	return *(int *)a - *(int *)b;
}

int main_bench()
{
	int in[1000];
	int n, k;
	int i;
	int found = 0;
	my_scanf("%d %d", &n, &k);
	for(i = 0; i < n; ++i)
	{
		my_scanf("%d", &in[i]);
	}
	qsort(in,n,sizeof(int),mysort);

	int *lp = &in[0];
	int *rp = &in[n - 1];
	while(lp != rp)
	{
		i = *lp + *rp;
		if(i < k)
		{
			++lp;
		}else if(i > k)
		{
			--rp;
		}else{
			found = 1;
			break;
		}
	}
	if(found)
	{
		my_printf("yes\n");
	}else{
		my_printf("no\n");
	}
	return 0;

}


