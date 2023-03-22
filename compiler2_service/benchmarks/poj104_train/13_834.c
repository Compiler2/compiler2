#include <header.h>

int main_bench()
{
    int n,i,k;
    my_scanf("%d",&n);
    int a[100]={0};
    my_scanf("%d",&k);
    a[k]=a[k]+1;
    my_printf("%d",k);
   for(i=2;i<=n;i++)
   {
     my_scanf("%d",&k);
     a[k]=a[k]+1;
     if(a[k]==1)
     my_printf(" %d",k);
    }
     return 0;
}
     
    
