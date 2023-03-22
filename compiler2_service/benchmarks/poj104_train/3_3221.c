#include <header.h>

int main_bench()
{
    int b,n,k,i,c=0;
    my_scanf("%d%d",&n,&k);
    int a[1000];
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
        
     
     for(b=0;b<n;b++)
    {
     for(i=0;i<n;i++)
     {if(i!=b)
     {if(a[b]+a[i]!=k)
     {c=c+1;
     continue;}
     else 
     break;}}}
    
     
     
     if(c==n*(n-1))
     my_printf("no");
     if(c!=n*(n-1))
     my_printf("yes");
     
     return 0;
     }
