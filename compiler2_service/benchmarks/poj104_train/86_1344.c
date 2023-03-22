#include <header.h>

void fy()
{
    int t=0,n,i,a[100];
    my_scanf("%d",&n);
    if(n==0)
    my_printf("60\n");
    else{
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
       if(i*3+a[i]>=60)
       {
           my_printf("%d\n",60-i*3);
           break;
       }
       if(a[i]+i*3+3>=60)
       {
           my_printf("%d\n",a[i]);
           break;
       }
    }
    if(i==n)
    my_printf("%d\n",60-i*3);
    }
}
int main_bench()
{
   int n;
   my_scanf("%d",&n);
   while(n)
   {
       fy();
       n--;
    }
}