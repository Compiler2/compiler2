#define NUM_ITER 30873

#include <header.h>

int main_bench()
{
    int n,i,A=0,B=0;
    my_scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
     {my_scanf("%d%d",&a[i],&b[i]);
      if((3+a[i]-b[i])%3==2)
       A++;
      if((3+a[i]-b[i])%3==1)
       B++;
     }
    if(A>B)
     my_printf("A");
    else if(B>A)
     my_printf("B");
    else
     my_printf("Tie");
}
