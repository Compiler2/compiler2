#define NUM_ITER 31708

#include <header.h>

int main_bench()
{
    int a,b,i,n=0,m=0,l;
    my_scanf("%d\n",&l);
    for(i=0;i<l;i++)
    {
         my_scanf("%d %d\n",&a,&b);
         if((a-b==-1)||(a-b==2))
         {m++;}
         if((b-a==-1)||(b-a==2))
         {n++;}
    }
    if(m==n){my_printf("Tie");}
    if(m>n){my_printf("A");}
    if(m<n){my_printf("B");}
    }