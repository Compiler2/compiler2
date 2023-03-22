#include <header.h>

int main_bench()
{
    int a[100],b[100];
    int n,i,j;
    my_scanf("%d", &n);
    for (i=0; i<n; i++) 
	{
        my_scanf("%d", &a[i]);
    }
    for (i=0,j=n-1; i<n,j>=0; i++,j--) 
	{
       b[j]=a[i];
    }
    for (j=0; j<n-1; j++) 
	{
        my_printf("%d ", b[j]);
    }
	if(j=n-1)
	{
		my_printf("%d",b[j]);
	}
    return 0;
}