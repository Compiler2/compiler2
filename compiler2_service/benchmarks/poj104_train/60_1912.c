#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d",&n);
    int a,b=0,i=0,t=0,j=0;
    for(a=2;a<=n-2;a++)
    {
                       t=0,j=0;
                       for(i=3;i<a/2+1;i++)
                       {
                       if(a%i==0)
                       t++;
                       }
                       for(i=2;i<(a+2)/2+1;i++)
                       {
                       if((a+2)%i==0)
                       j++;
                       }
                       if(t==0&&j==0)
                       my_printf("%d %d\n",a,a+2),b++;
    }
    if(b==0)
    my_printf("empty");
}