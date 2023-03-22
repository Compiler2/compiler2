#define NUM_ITER 51472

#include <header.h>

int main_bench()
{
int n;
my_scanf ("%d",&n);
int shuzu[n],Shuzu[n];
for(int k=0;k<n;k++)
my_scanf ("%d",&shuzu[k]);
for(int i=0;i<n;i++)
Shuzu[i]=shuzu[n-1-i];
for (int r=0;r<n-1;r++)
my_printf ("%d ",Shuzu[r]);
my_printf ("%d",Shuzu[n-1]);
return 0;
}



