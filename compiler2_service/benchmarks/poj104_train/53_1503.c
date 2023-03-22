#define NUM_ITER 16484

#include <header.h>

int main_bench()
{
int n;
my_scanf("%d",&n);
int a[n];
for (int i=0;i<n;i++)
    {
    my_scanf("%d",&a[i]);
    for (int j=0;j<i;j++)
        if (a[i]==a[j]) {i--;n--;break;}
    }
my_printf("%d",a[0]);
for (int i=1;i<n;i++)
    my_printf(",%d",a[i]);
}
