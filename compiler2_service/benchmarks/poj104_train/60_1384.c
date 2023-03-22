#include <header.h>

int su(int m);
int main_bench()
{
    int n,i,p;
    my_scanf("%d",&n);
    p=0;
    for (i=3;i<=n-2;i++)
    {
        if ((su(i)==1) && (su(i+2)==1))
           {
           p=1;
           my_printf("%d %d\n",i,i+2);
           }
    }
if (p==0) my_printf("empty");
}
int su(int m)
{
    int j;
    for (j=2;j<=m-1;j++)
        if (m % j==0)
           return 0;
    return 1;
} 
    
