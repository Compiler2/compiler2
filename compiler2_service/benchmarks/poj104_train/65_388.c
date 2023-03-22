#define NUM_ITER 28675

#include <header.h>

int main_bench()
{
    int n,A,B,i;A=0;B=0;
    int a[200];
    int b[200];
    my_scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {my_scanf("%d %d\n",&a[i],&b[i]);
    if(a[i]==0&&b[i]==0)
    {A++;B++;}
    else if(a[i]==0&&b[i]==1)
    {A++;}
    else if(a[i]==0&&b[i]==2)
    {B++;}
    else if(a[i]==1&&b[i]==0)
    {B++;}
    else if(a[i]==1&&b[i]==1)
    {B++;A++;}
    else if(a[i]==1&&b[i]==2)
    {A++;}
    else if(a[i]==2&&b[i]==0)
    {A++;}
    else if(a[i]==2&&b[i]==1)
    {B++;}
    else if(a[i]==2&&b[i]==2)
    {B++;A++;}}
    if(A==B)
    {my_printf("Tie");}
    else if(A>B)
    {my_printf("A");}
    else
    {my_printf("B");}
    return 0;
}
