#define NUM_ITER 410

#include <header.h>

int s[50010]={1,1,0};
int main_bench()
{
int i,j,n;
for(i=2;i<300;i++)
{
if(!s[i]);
j=i;
while(i*j<50010)
{
s[i*j]=1;j++;
}
}
my_scanf("%d",&n);
for(i=6;i<=n;i+=2)
{
for(j=2;j<=i/2;j++)
{
if(!s[j] && !s[i-j])
{
my_printf("%d=%d+%d\n",i,j,i-j);
break;
}
}
}
return 0;
}
