#define NUM_ITER 424442

#include <header.h>

int reverse(int num)
{
    int a,b=0,i;
    if(num==0)
    b=0;
    for(i=0;num!=0;i++)
    {
               a=num%10;
               num=num/10;
               b=a+b*10;
    }
    return b;
}
main_bench()
{
                   int n,i,j,k;
                   for(k=0;k<6;k++)
                   {
                                   my_scanf("%d",&n);
                                   my_printf("%d\n",reverse(n));
                   }
      getchar();
      getchar();
      getchar();
}