#include <header.h>

int main_bench()
{
   int n,i,a[200][2];
   double c;
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   my_scanf("%d%d",&a[i][0],&a[i][1]);
    c=(double)a[0][1]/a[0][0];
   for(i=1;i<n;i++)
   if((double)a[i][1]/a[i][0]-c>0.05)
    my_printf("better\n");
   else if((double)a[i][1]/a[i][0]-c<-0.05)
   my_printf("worse\n");
    else my_printf("same\n");
   return 0;
}

    