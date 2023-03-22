#define NUM_ITER 32

#include <header.h>

int main_bench()
{
int k;
my_scanf("%d",&k);
while(k--)
{
int m,n;
my_scanf("%d %d",&m,&n);
int a[101][101];
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
my_scanf("%d",&a[i][j]);
int sum=0;
for(int i=0;i<m;i++)
sum=sum+a[i][0]+a[i][n-1];
for(int i=1;i<n-1;i++)
sum=sum+a[0][i]+a[m-1][i];
my_printf("%d\n",sum);
}
return 0;
}