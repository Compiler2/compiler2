#include <header.h>

main_bench()
{
   int n,i,a[201],b[201],c=0,d=0;
   my_scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
                    my_scanf("%d %d",&a[i],&b[i]);
   }
   for(i=1;i<=n;i++)
   {
                    if(a[i]-b[i]==-1||a[i]-b[i]==2)
                    c++;
                    else
                    {
                        if(a[i]!=b[i])
                        d++;
                    }
   }
   if(c>d)
   my_printf("A");
   else
   {
       if(c==d)
       my_printf("Tie");
       else
       my_printf("B");
   }
   }
