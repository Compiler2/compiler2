#define NUM_ITER 4281

#include <header.h>


int main_bench()
{
    int m=0,n,k=0,x=0;
    double sum=0,a=2,b=1,c=0;
    my_scanf("%d",&m);
    while(k<m)
    {
              my_scanf("%d",&n);
              while(x<n)
              {
                        sum=sum+a/b;
                        c=a;
                        a=a+b;
                        b=c;
                        x=x+1;
              }
              my_printf("%.3lf\n",sum);
              sum=0;
              x=0;
              a=2;
              b=1;
              c=0;
              k=k+1;
             }
   return 0;
}
                        
