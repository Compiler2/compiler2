#define NUM_ITER 372

#include <header.h>

int main_bench()
{
int m;
int i,j,k;
my_scanf("%d",&m);
int s[2000];
s[0]=2;s[1]=3;
k=1;
for(j=3;j<10000;j++)
{
for(i=0;s[i]*s[i]<j;i++)
{
if(j%s[i]==0)
break;
}
if(s[i]*s[i]>j)
{
s[k]=j;
k++;
}
}
for(j=0;s[j]<=m/2;j++)
{
for(i=0;s[i]<=m;i++)
if(m==s[i]+s[j])
{
my_printf("%d %d\n",s[j],s[i]);
}
}

return 0;
}