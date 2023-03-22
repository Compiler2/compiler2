#include <header.h>

int hui(int i)
{
    int a[20],j,k;
    for(j=0;i!=0;j++)
    {
         a[j]=i%10;
         i=i/10;
    }
    for(k=0;k<j/2;k++)
    if(a[k]!=a[j-k-1])
    break;
    if(k==j/2)
    return 0;
    else
    return 1;
}
int su(int i)
{
    int j;
    for(j=2;j<i;j++)
    if(i%j==0)
    break;
    if(i==j)
    return 0;
    else
    return 1;
}
int main_bench()
{
    int m,n,s=0;
    my_scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++)
    {
            if(hui(i)==0)
            {
                         if(su(i)==0)
                         {
                                     s++;
                                     if(s==1)
                                     my_printf("%d",i);
                                     else
                                     my_printf(",%d",i);
                         }
            }
    }
    if(s==0)
    my_printf("no");
    getchar();
    getchar();
}
            
