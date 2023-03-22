#define NUM_ITER 55600

#include <header.h>

int main_bench()
{
 int i,j,n,a[1000],m;
 a[1]=1;
 a[2]=1;
 for (i=3;i<30;i++)
 a[i]=a[i-1]+a[i-2];
 my_scanf("%d",&n);
 for (i=0;i<n;i++)
 {
 my_scanf("%d\n",&m);
 my_printf("%d\n",a[m]);
 }
}
