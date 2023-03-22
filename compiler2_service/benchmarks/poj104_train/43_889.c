#include <header.h>


int main_bench()
{
   int n, i, j, a[10000], flag=0;
   my_scanf("%d",&n);
   for (i=3;i<=n;i++)
   {
   for(j=2;j<i;j++)
   {if(i%j==0)
   break;
   }
   if(j==i)
   {flag+=1;
   a[flag]=i;
   }  
   }
     for(i=1;i<=flag;i++)
     {
     for(j=i;j<=flag;j++)
     {
     if(a[i]+a[j]==n)
     {my_printf("%d %d\n",a[i],a[j]);
     break;  
     }
     }
     }
     return 0;
}
