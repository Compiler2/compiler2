#define NUM_ITER 5345

#include <header.h>

int main_bench()
{
    int n,i,j,x,a[20000]={0},b[20000]={0};
    my_scanf("%d\n",&n);
    for(i=0;i<n;i++)
         my_scanf("%d ",&a[i]);
    b[0]=a[0];
    for(j=1;j<=n;j++)
    {
                     x=0;
                     for(i=0;i<j;i++)
                     {
                                     if(a[j]==a[i])
                                     x++;
                     } 
                     if(x==0)
                     b[j]=a[j];
                     else b[j]=0;
    }
    my_printf("%d",b[0]); 
    for(i=1;i<n;i++)
    {
                     if(b[i]!= 0)
                     my_printf(" %d",b[i]);
    }    
    getchar();
    getchar();
}                      
                       