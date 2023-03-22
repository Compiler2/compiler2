#include <header.h>

int main_bench()
{
int a[1010];
int k,i,j,n;
my_scanf("%d %d",&n,&k);
for(i=0;i<=n-1;i++)
my_scanf("%d ",&a[i]);
for(i=0;i<=n-1;i++)
{
   for(j=0;j<=n-1;j++)
   {
	   if(a[i]+a[j]==k){
		   my_printf("yes");return 0;}
    }
}
my_printf("no");
return 0;
}