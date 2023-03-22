#include <header.h>



struct block
{
	int l;
	int r;
};

int mysort(void *a, void *b)
{
	struct block *aa = (struct block*)a;
	struct block *bb = (struct block*)b;
	if(aa->l == bb->l)
	{
		return bb->r - aa->r;
	}else{
		return aa->l - bb->l;
	}
}

int main_bench()
{
	struct block in[50000];
	int n;
	int i;
	int left, right;
	my_scanf("%d", &n);
	for(i = 0; i < n; ++i)
	{
		my_scanf("%d %d", &in[i].l, &in[i].r);
	}
	qsort(in,n,sizeof(in[0]),mysort);

	left = in[0].l;
	right = in[0].r;
	for(i = 1; i < n; ++i)
	{
		if(in[i].r > right)
		{
			if(in[i].l <= right)
			{
				right = in[i].r;
			}
			else break;
		}
	}
	if(i == n)
	{
		my_printf("%d %d", left, right);
	}else{
		my_printf("no\n");
	}
	return 0;

}


