#define NUM_ITER 2178

#include <header.h>

int main_bench()
{
    int n,i,j,p,q,m=0;
    my_scanf("%d",&n);
    for(i=3;i<=(n-2);i++)
    {
         for(p=0,j=2;j<=(i/2);j++)
         {
         if(i%j==0)
         p++;
         }
         for(q=0,j=2;j<=(i+2)/2;j++)
         {
         if((i+2)%j==0)
         q++;
         }
    if((p==0)&&(q==0))
    my_printf("%d %d\n",i,i+2);
    m++;
    }
   if(m==0)
    my_printf("empty");
 return 0;
}
    