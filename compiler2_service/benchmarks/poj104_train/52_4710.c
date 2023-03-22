#define NUM_ITER 7839

#include <header.h>



void move(int a[101], int n, int m)
{
    int *p, end;
    end=*(a+n-1);
    for(p=a+n-1; p>a; p--)
    *p=*(p-1);
    *a=end;
    m--;
    if(m>0)
    move(a, n, m);
}

int main_bench()
{
    int a[101];
    int i, first=1;
    int n, m;
        my_scanf("%d%d", &n, &m);
    for(i=0; i<n; i++)
        my_scanf("%d", &a[i]);
    move(a, n, m);
    for(i=0; i<n; i++)
	{
		if(first)
			first=0;
		else my_printf(" ");
		my_printf("%d", a[i]);
	}
    my_printf("\n");
    return 0;
}
