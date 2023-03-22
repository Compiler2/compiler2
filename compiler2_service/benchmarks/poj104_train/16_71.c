#include <header.h>


int main_bench()
{
    int n;
    int i=0;
    int num[5];
    my_scanf("%d",&n);
    while( n/10!=0 )
    {
           num[i++]=n%10;
           n/=10;       
    }
    num[i]=n;
    for( int m=0;m<=i;m++ )
    my_printf("%d",num[m]);
my_printf("\n");
}
