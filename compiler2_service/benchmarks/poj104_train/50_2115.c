#define NUM_ITER 813167

#include <header.h>

int main_bench()
{
    int w,i;
    my_scanf("%d", &w);
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int b[13];
    b[1]=w;
    for(i=2;i<=12;i++)
    {
                      if(a[i-1]==31)
                      b[i]=(b[i-1]+3)%7;
                      else if(a[i-1]==30)
                      b[i]=(b[i-1]+2)%7;
                      else if(a[i-1]==28)
                      b[i]=b[i-1];
    }
    for(i=1;i<=12;i++)
    {
                      if(b[i]==0||b[i]==7)
                      {
                      my_printf("%d", i);
                      my_printf("\n");
                      }
    }                      

    return 0;
}    