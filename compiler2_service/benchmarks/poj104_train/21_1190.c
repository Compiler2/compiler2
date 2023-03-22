#include <header.h>

int a(int k)
{
    if(k>0)
    return k;
    return -k;
}
int main_bench()
{
    int num[300];
    int n,i,flag=1;
    int sum=0,max=0;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    my_scanf("%d",&num[i]);
    sum+=num[i];
    }
    for(i=1;i<=n;i++)
    {
                    if(max<a(num[i]*n-sum))
                    max=a(num[i]*n-sum);
    }
    for(i=1;i<=n;i++)
    {
                     if(max==sum-num[i]*n)
                     {
                                          if(flag==0)
                                          my_printf(",");
                                          flag=0;
                     my_printf("%d",num[i]);
                     }
    }
    for(i=1;i<=n;i++)
    {
                     if(max==-sum+num[i]*n)
                     {                    if(flag==0)
                                          my_printf(",");
                                          flag=0;
                     my_printf("%d",num[i]);
                     }
    }
    return 0;
}
