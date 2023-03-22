#define NUM_ITER 11191

#include <header.h>

int main_bench()
{
    int n,i,j,k,s,a,b;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      my_scanf("%d",&k);
      if(k==1||k==2)
      {
        my_printf("1\n");
        continue;
        }
        else
        {
          a=1;
          b=1;  
        for(j=3;j<=k;j++)
        {
           s=a+b;
           a=b;
           b=s;
           }
           my_printf("%d\n",s);
           }
           }
           getchar();
           getchar();
           }