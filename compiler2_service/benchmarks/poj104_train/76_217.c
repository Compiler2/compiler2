#define NUM_ITER 34

#include <header.h>

int main_bench(){
int n,i,a,b,j,p,q,e;
int sz[10000];
my_scanf("%d",&n);
for(i=0;i<10000;i++)
{
sz[i]=0;
}
for(i=0;i<n;i++)
{
my_scanf("%d %d",&a,&b);
for(j=0;j<10000;j++)
{
if(j+1>=a&&j+1<=b-1)
{
sz[j]=1;
}
}
}
for(i=0;i<10000;i++)
{
if(sz[i]==1)
{
for(j=i;j<10000;j++)
{
if(sz[j]==0)
{
break;
}
}
break;
}
}
q=i+1;
e=j+1;
for(p=j;p<10000;p++)
{
if(p==9999&&sz[p]==0)
{
my_printf("%d %d",q,e);
break;
}
else if(sz[p]==1)
{
my_printf("no");
break;
}
}
return 0;
}