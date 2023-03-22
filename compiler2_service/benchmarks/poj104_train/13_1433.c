#define NUM_ITER 6115

#include <header.h>

int main_bench()
{
    int n,i,j,m,y;
    my_scanf("%d", &n);
    int a[20000];
    int b[20000];
    for(i=0;i<n;i++)
    {
                    my_scanf("%d", &a[i]);
    }
    my_printf("%d", a[0]);
    
    for(i=1;i<n;i++)
    { 
                    y=0;
                    for(j=0;j<=i-1;j++)
                    {
                          if(a[i]==a[j])
                          {
                                y++;
                          }
                    }
                    if(y==0)
                    my_printf(" %d", a[i]);
    }             

    return 0;
}
                                    
                   