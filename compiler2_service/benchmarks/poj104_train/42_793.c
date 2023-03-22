#define NUM_ITER 48875

#include <header.h>

int main_bench()
{
    int n;
    int a,b=0;
    int arr[100001];
    my_scanf("%d",&n);
    for( int i=0;i<n;i++ )
    {
         my_scanf("%d",&arr[i]);     
    }
    my_scanf("%d",&a);
    for( int i=0;i<n;i++ )
    {
         if( arr[i]!=a )
         {
             b++;
         }
    }
    for( int i=0;i<n;i++ )
    {
         if( arr[i]!=a )
         {
             if( b==1 )
             {
                 my_printf("%d\n",arr[i]);
                 break;
             }
             else my_printf("%d ",arr[i]);
             b--;
         }
    }
}
