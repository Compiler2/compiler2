#define NUM_ITER 5994

#include <header.h>

int main_bench()
{
int a,n[100],i,m[100];
my_scanf("%d",&a);

for(i=0;i<a;i++)
{
my_scanf("%d",&(n[i]));
m[i]=0;
}
for(int j=0;j<a;j++)
{
for(i=j+1;i<a;i++)
if(n[j]==n[i]) m[i]++;
}
my_printf("%d",n[0]);
for(i=1;i<a;i++)
if(m[i]==0) my_printf(",%d",n[i]);
return 0;
}
