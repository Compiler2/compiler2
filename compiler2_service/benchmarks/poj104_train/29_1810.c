#define NUM_ITER 3274

#include <header.h>

int main_bench()
{
    int m,n,i=1,k=3;
    float s=3.5,p,a=2.0,b=3.0;
    my_scanf("%d\n",&m);
    while(i<=m)
     {
        my_scanf("%d\n",&n);
          if(n>=3)
           {while(k<=n)
             {
             p=a+b;
             s=s+p/b;
             a=b;
             b=p;
             k=k+1;
              }
         my_printf("%.3f\n",s);
       s=3.5;
       a=2.0;
       b=3.0;
       k=3;
         }
     else if(n==1)
       {my_printf("2.000\n");}
     else
        {my_printf("3.500\n");}
     i=i+1;
     }
return 0;
}