#define NUM_ITER 4603

#include <header.h>

int main_bench()
{
int n,i,j,k;
my_scanf("%d %d",&n,&k);
int a[n];
int b[n];
for(i=0;i<n;i++)
{
my_scanf("%d ",&a[i]);
b[i]=k-a[i];
}
int m=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(b[j]==a[i])m++;
}
}
if(m>0) my_printf("yes");
else my_printf("no");
}

