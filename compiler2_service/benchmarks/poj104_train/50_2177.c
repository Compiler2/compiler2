#include <header.h>

int main_bench()
{
    int w,n,i,sum;
    int a[13];
    a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=a[12]=31;
    a[4]=a[6]=a[9]=a[11]=30;
    a[2]=28;
    my_scanf("%d",&w);
    sum=0;
    if((12+w)%7==5)
       my_printf("1\n");
    for(i=1;i<12;i++)
    {
       sum+=a[i];
       if((sum+12+w)%7==5)
          my_printf("%d\n",i+1);
    }
}
