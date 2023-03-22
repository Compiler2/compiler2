#define NUM_ITER 2048365

#include <header.h>

main_bench()
{int a[6],l,i;

l=1;
 while(my_scanf("%1d",&a[l])==1)l++;
 l--;
 for(i=l;i>=1;i--)my_printf("%d",a[i]);
}
