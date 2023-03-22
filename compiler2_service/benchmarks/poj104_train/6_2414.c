#define NUM_ITER 19

#include <header.h>

int main_bench()
{
 int a[10000],i,j,m,n,k,max; 
 int * pa;
 my_scanf("%d",&k);
 for(i=1;i<=k;i++)
 {
 my_scanf("%d %d",&m,&n);
 for(j=1;j<=m*n;j++)
 my_scanf("%d",&a[j-1]);
 pa=a;
 if((m>=2)&&(n>=2))
 {for(j=1;j<n;j++) *pa+=a[j];
 for(j=m*n-n;j<m*n;j++) *pa+=a[j];
 for(j=n;j<m*n-n;j++) 
 if((j%n==0)||(j%n==n-1)) *pa+=a[j];}
 else {for(j=1;j<m*n;j++) *pa+=a[j];}
 my_printf("%d\n",*pa);
 }
 return 0;
}