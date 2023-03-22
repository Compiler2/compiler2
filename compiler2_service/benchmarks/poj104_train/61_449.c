#define NUM_ITER 59456

#include <header.h>


int a[21];
void cal()
{
     a[0]=1;
     a[1]=1;
     for(int i=2;i<=20;i++)
     a[i]=a[i-1]+a[i-2];
 }
int main_bench()
{
    int t;
    my_scanf("%d",&t);
    cal();
    while(t--)
    {
        int n;
        my_scanf("%d",&n);
        my_printf("%d\n",a[n-1]);
    }
    
    return 0;
}
