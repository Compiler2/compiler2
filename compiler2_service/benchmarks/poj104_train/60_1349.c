#include <header.h>

int sushu(int x)
{
    int i,a;
    for(i=2;i<x;i++)
    if(x%i==0)
    break;
    if(i==x)
          a=1;
    else
          a=0;
    return(a);
}
int main_bench() 
{
    int sushu(int x);
    int N,n;
    int Flag=0;
    my_scanf("%d",&N);
    {
        for(n=1;n<=(N-2);n++)
        if(sushu(n)==1)
        if(sushu(n+2)==1)
        {my_printf("%d %d\n",n,(n+2));
        Flag=1;}
    }
    if(Flag==0)
    my_printf("empty");        
}