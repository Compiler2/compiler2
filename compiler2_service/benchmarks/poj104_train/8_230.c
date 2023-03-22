#define NUM_ITER 2410

#include <header.h>


int a[1000], b[1000], c[2000];
int m, n;


void inputarray(int a[], int n)
{
	int i;	
	for(i = 0; i < n; i++)
	{
		my_scanf("%d", &a[i]);
	}
}

void input()
{
	my_scanf("%d %d", &m, &n);
	inputarray(a, m);
	inputarray(b, n);
}

void sort(int a[], int n)
{
	int i, j, temp;
	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

void combine(int a[], int b[], int c[], int m, int n)
{
	int i;
	for(i = 0; i < m; i++)
	{
		c[i] = a[i];
	}
	for(; i < m + n; i++)
	{
		c[i] = b[i - m];
	}
}

void output(int a[], int n)
{
	int i;
	for(i = 0; i < n - 1; i++)
	{
		my_printf("%d ", a[i]);
	}
	my_printf("%d", a[i]);
}

int main_bench()
{
	input();
	sort(a, m);
	sort(b, n);
	combine(a, b, c, m, n);
	output(c, m + n);
}
	