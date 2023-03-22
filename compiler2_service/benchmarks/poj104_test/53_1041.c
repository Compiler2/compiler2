#define NUM_ITER 7931

#include <header.h>

int main_bench()
{
    int n,a[300],b[300]={0},i,j,k=0,s=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    my_scanf("%d",&a[i]);
    }
    b[0]=a[0];
    for(i=1;i<n;i++)
    {
                    for(j=0;j<i;j++)
                    {
                                    if(a[i]==a[j])
                                    break;
                                    s++;                                                                                                        
                    }
                    if(s==i)
                    {
                              k++;
                              b[k]=a[i];
                    }
                    s=0;
    }
    for(i=0;i<k;i++)
    {
                    my_printf("%d,",b[i]);
    }
    my_printf("%d",b[k]);
    my_scanf(" ");
    return 0;
}