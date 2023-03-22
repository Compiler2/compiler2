#include <header.h>

int main_bench()
{
    int n,a,b,count,i,count_max;
    my_scanf("%d",&n);
    count=0;
    count_max=0;
    for(i=1;i<=n;i=i+1)
    {
       my_scanf("%d %d",&a,&b);
       if(a>=90 && a<=140 && b>=60 && b<=90)
           count=count+1;
       else           
          {
               if(count_max<count)
                     count_max=count;
               count=0;
           }
       if(count>count_max)
           count_max=count;
     }
          my_printf("%d",count_max);
     return 0;
}    