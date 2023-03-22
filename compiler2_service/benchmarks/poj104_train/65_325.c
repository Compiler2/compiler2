#define NUM_ITER 34698

#include <header.h>

int main_bench()
{
    int a,b,A=0,B=0,n,i,j;

    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     my_scanf("%d %d",&a,&b);
     j=a-b;
     if(j==-1||j==2)
     A++;
     else if(j==1||j==-2)
     B++;
     
  }
    if(A>B)
    my_printf("A");
    if(A<B)
    my_printf("B");
    if(A==B)
    my_printf("Tie");

}