#include <header.h>


void chan (int *p, int *q)
{
	int t=*p; *p=*q; *q=t;
}


int exch (int ar[5][5], int n, int m)
{
	if (n>=5||m>=5) return 0;
	else 
	{
		int i;
		for (i=0; i<5; i++)
			chan (*(ar+n)+i, *(ar+m)+i);
		return 1;
	}
}

int main_bench()
{
	int ar[5][5], n, m, i, j, k;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++)
			my_scanf ("%d", *(ar+i)+j);
	my_scanf ("%d%d", &n, &m);
	k=exch(ar, n, m);
	if (k==0)
		my_printf ("error");
	else 
	{
		for (i=0; i<5; i++)
		for (j=0; j<5; j++)
		{
			if (j==4)
				my_printf ("%d\n", *(*(ar+i)+j));
			else my_printf ("%d ", *(*(ar+i)+j));
		}
	}
	return 0;
}