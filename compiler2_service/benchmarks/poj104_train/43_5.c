#define NUM_ITER 20342

#include <header.h>

int main_bench()
{
    int m,a,b,j,i;
    my_scanf("%d",&m);
    for(a=3;a<m;a=a+2)
      for(b=3;b<m;b=b+2)
        {
            if(a+b==m&&a<=b)
          {
            for(i=2;i*i<=a;i++)
             if(a%i==0) break;
            for(j=2;j*j<=b;j++)
             if(b%j==0) break;
            if(i*i>a&&j*j>b) my_printf("%d %d\n",a,b);
          }
        }
}