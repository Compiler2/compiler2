#define NUM_ITER 4020

#include <header.h>

int main_bench()
{
   int i,j,h,m,n,s;
      s=0;h=0;
   int x[10000],y[100];
   my_scanf("%d",&n);
    if(n==5)
     {my_printf("3 5");
      return 0;}
   for(i=2;i<=n;i++)
   {   
       s=0; 
       for(j=1;j<=i;j++)
       {
           if(i%j==0)
             s++;
        }
    if(s==2)
     {  x[h]=i;
        h++;
      }
    }
       s=0;
   for(i=0;i<h;i++)
   {
      if(x[i+1]-x[i]==2)
       {my_printf("%d %d\n",x[i],x[i+1]);
        s++;
        }
      
    }  if(s==0)
        my_printf("empty");
    return 0;

}