#define NUM_ITER 30969

#include <header.h>


int j(int a,int b)
{
    if(a>b)return -j(b,a);
    if(b-a==1) return 1;
    if(b==a) return 0;
    if(b-a==2) return -1;
}
int main_bench()
{
    int n,s=0,i,a,b;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    my_scanf("%d%d",&a,&b);
    s+=j(a,b);
    }
    if(s<0)my_printf("B");
    else if(s==0)my_printf("Tie");
    else my_printf("A");
    return 0;
}

