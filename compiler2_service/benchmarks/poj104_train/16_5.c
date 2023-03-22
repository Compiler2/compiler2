#include <header.h>

int main_bench()
{
    int n;
    int i;
    my_scanf("%d",&n);
    int k,count=0,s=1;
    int sum=0;
    while(n!=0)
    {
         k=n%10;
         if(k==0)
         count++;                
         n=n/10;
         sum=sum*10+k;
    }
    for(i=1;i<=count;i++)
    my_printf("0");
    my_printf("%d",sum);
}