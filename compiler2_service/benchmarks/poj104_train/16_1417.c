#define NUM_ITER 1307682

#include <header.h>

int main_bench()
{
    int n,i,an[10];
    my_scanf("%d",&n);
    int j=0;
    for(i=n;i>0;i=i/10)
    {
      an[j]=i%10;
      j++;
    }
    for(i=0;i<j;i++)
    {
     my_printf("%d",an[i]);
    }
    return 0;
}
