#define NUM_ITER 178189

#include <header.h>

int main_bench()
{
   int a[5][5],i,j,k,s,h;
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           my_scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           for(k=0;k<5;k++)
           {
               if(a[i][j]<a[i][k])
               break;
           }
           if(k==5)
           {
               for(s=0;s<5;s++)
               {
                   if(a[i][j]>a[s][j])
                   break;
               }
               if(s==5)
               {my_printf("%d %d %d",i+1,j+1,a[i][j]);h=1;}
           }
       }
   }
   if(h!=1)
   my_printf("not found");
   getchar();
   getchar();
    return 0;
}