#define NUM_ITER 545

#include <header.h>

int main_bench()
{
int a,b;
my_scanf("%d %d",&a,&b);
int n[1000][1000];
int i,j;
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
my_scanf("%d",&n[i][j]);
}
for(int t=0;t<b;t++)
{
for(j=t,i=0;i<a&&j>=0;i++,j--)
my_printf("%d\n",n[i][j]);
}
for(int p=1;p<a;p++)
{
for(i=p,j=b-1;i<a&&j>=0;i++,j--)
my_printf("%d\n",n[i][j]);
}
return 0;
}