#include <header.h>

int main_bench()
{
    int d=1,n,j,i,c;
    my_scanf ("%d",&n);
    int a[65535];
    for (j=3;j<=n;j++)
    {
     for (i=1,c=0;i<=j;i++)
     {
        if (j%i==0)
        c=c+1;
     }
     if(c==2)
     {
        a[d]=j;
        d=d+1;
     }
    }
    if (n<=4)
    my_printf("empty");
    else 
     {
         for (i=1;i<=n;i++)
         {
           if (a[i+1]-a[i]==2)
           my_printf ("%d %d\n",a[i],a[i+1]);
         }
     }
     getchar();
     getchar();
}
    