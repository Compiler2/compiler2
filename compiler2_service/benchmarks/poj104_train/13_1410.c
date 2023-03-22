#define NUM_ITER 7363

#include <header.h>

int main_bench()
{int a[20002]={1},n,i,j,k;
my_scanf("%d",&n);
my_scanf("%d",&a[1]);
my_printf("%d",a[1]);
 for(i=2;i<=n;i++)
 { my_scanf("%d",&a[i]);
    k=0;
   for(j=i-1;j>0;j--)
   {if (a[i]==a[j])break;
   else k=k+1;}
    if(k==i-1)my_printf(" %d",a[i]);
 }
   
 
 return 0;
}