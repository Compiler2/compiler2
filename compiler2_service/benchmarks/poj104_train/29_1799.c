#define NUM_ITER 4165

#include <header.h>

int main_bench()
{
    int m,n,i,k=1;
    float sum,d,a,b,c;
    my_scanf("%d",&m);
    a=1,b=2,sum=0;
    for(i=1;i<=m;i=i+1)
    {
        my_scanf("%d",&n);
         while(k<=n)
         {
                    d=b/a;
                    sum=sum+d;
                    c=b;
                    b=b+a;
                    a=c;
                    k=k+1;
         }
         my_printf("%.3f\n",sum);
         sum=0;
         k=1;a=1;b=2;c=2;
         

    }
         return 0;
}