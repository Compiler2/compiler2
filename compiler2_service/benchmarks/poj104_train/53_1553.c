#define NUM_ITER 6087

#include <header.h>


main_bench()
{int j,i,n,l,k=0,d=0;
int a[100],b[100];
my_scanf("%d",&n);
for(i=1;i<=n;i++)
{my_scanf("%d",&a[i]);b[i]=a[i];}
for(i=1;i<=n;i++)
 for(j=i+1;j<=n;j++)
 {if(a[i]==a[j]) b[j]=0;}
for(i=1;i<=n;i++)
{if(b[i]==0) k=k+1;}
for(i=1;i<=n;i++)
{if(b[i]!=0){d=d+1; 
if(d==n-k) my_printf("%d",b[i]);
else my_printf("%d,",b[i]);


}}

return 0;
}