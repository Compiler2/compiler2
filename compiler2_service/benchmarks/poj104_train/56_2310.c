#define NUM_ITER 1610348

#include <header.h>

int main_bench()
{
    char num[10]={'a'};
    int i,sum=0;
    my_scanf("%s",num);
    for(i=0;i<10;i++)
    {
                     if((num[i]>='0')&&(num[i]<='9')==1)
                     sum++;
                     else
                     break;
    }
    for(i=sum-1;i>=0;i--)
    {
                         my_printf("%c",num[i]);
    }

    return 0;
}