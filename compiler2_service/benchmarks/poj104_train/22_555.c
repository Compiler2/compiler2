#define NUM_ITER 1664369

#include <header.h>

int main_bench()
{
    long int i,j,k,n,m;
    char c;
    c=',';
    m=-99990; n=-88880;
    while (c==',')
    {
          my_scanf("%d",&i);
          if (i>m)
          {
             n=m; m=i;
          }
          else if ((i>n)&&(i<m))  n=i;
          c=getchar();
    }
    if ((n!=-88880)&&(n!=-99990)) my_printf("%d",n);
    else my_printf("No");
}