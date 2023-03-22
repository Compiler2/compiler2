#define NUM_ITER 6182

#include <header.h>

int main_bench()
{
int a[300],m=0,n,p=0;
my_scanf("%d",&m);
for(int i=0;i<m;i++)
{
my_scanf("%d",&(a[i]));
}
my_printf("%d",a[0]);
for(n=1;n<m;n++)
{
p = 0;
for(int j=0;j<=n-1;j++)
{
if(a[n]==a[j])
{
p++;
}
}
if(p==0)
my_printf(",%d",a[n]);
else
continue;
}
return 0;
}
