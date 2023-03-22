#include <header.h>

int main_bench()
{
    int a,b,max2;
    max2=0;
    char sep;
    my_scanf("%d%c",&a,&sep);
    while (sep==',')
    {
        my_scanf("%d%c",&b,&sep);
        if(b>a)
        {
            max2=a;
            a=b;
        }
        else
        {
            if(b>max2&&b!=a)
            {
                max2=b;
            }
        }
    }
    if(max2!=0)
    {
        my_printf("%d",max2);
    }
    else
    {
        my_printf("No");
    }
    return 0;
}