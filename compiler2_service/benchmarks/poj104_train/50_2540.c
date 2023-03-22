#define NUM_ITER 383606

#include <header.h>

int main_bench()
{
    int w,t,i;
    int a[13];
    my_scanf("%d",&w);
    a[1]=31;
    a[2]=28;
    a[3]=31;
    a[4]=30;
    a[5]=31;
    a[6]=30;
    a[7]=31;
    a[8]=31;
    a[9]=30;
    a[10]=31;
    a[11]=30;
    a[12]=31;
    t=0;
    i=0;
    while (t<=11)
    {
    i=i+1;
    t=t+1;
    my_scanf("%d",&a[i]);
      if(w==7)
        {
         my_printf("%d\n",t);
         w=((w+a[i])%7)+7;
         }
      else
         w=((w+a[i])%7)+7;
     }

       return 0;
} 
