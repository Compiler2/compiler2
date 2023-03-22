#include <header.h>

int main_bench()
{
    int i,a,b[5]={0};
    my_scanf("%d",&a);
    for (i=0;i<5;i++)
    {
        b[i]=a%10;
        a=(int)a/10;
    }
    i=0;
    while (b[i]!=0)
    {
        my_printf("%d",b[i]);
        i++;
    }
}