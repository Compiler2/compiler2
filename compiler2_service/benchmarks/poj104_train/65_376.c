#define NUM_ITER 30657

#include <header.h>

main_bench()
{
   int n,a[100],b[100],i,x,y;
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   {
               my_scanf("%d %d",&a[i],&b[i]);
               }
               x=0,y=0;
               for(i=0;i<n;i++)
               {
               if(a[i]==0&&b[i]==1) 
               x++;
               else if(a[i]==0&&b[i]==2) 
               y++;
               else if(a[i]==1&&b[i]==0) 
               y++;
               else if(a[i]==1&&b[i]==2) 
               x++;
               else if(a[i]==2&&b[i]==0) 
               x++;
               else if(a[i]==2&&b[i]==1) 
               y++;
               }
               if(x==y) my_printf("Tie\n");
               if(x<y) my_printf("B\n");
               if(x>y) my_printf("A\n");
                           }