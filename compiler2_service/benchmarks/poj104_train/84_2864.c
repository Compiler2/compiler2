#define NUM_ITER 5549

#include <header.h>

int main_bench()
{
    int a[100],N,i,j,temp;
    my_scanf("%d\n", &N);
    for(i=1;i<=N;i++)
        my_scanf("%d\n", &a[i]);   
    for(i=1;i<=N;i++)
          { 
            for(j=i+1;j<=N;j++)
            if (a[j]<a[i])
               {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
                 }
           }
     my_printf("%d\n%d\n",a[N],a[N-1]);
}

