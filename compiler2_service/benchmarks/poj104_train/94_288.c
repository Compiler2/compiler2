#define NUM_ITER 5166

#include <header.h>

int main_bench(){
int a,n,i,e,j=0;
my_scanf("%d",&n);j=n;
int sz[500];
for(i=0;i<n;i++)
{
my_scanf("%d",&sz[i]);
}
for(i=0;i<n;i++)
{
if(sz[i]%2==0)
{
sz[i]=0;j=j-1;
}
}
for(a=1;a<=n;a++)
{
for(i=0;i<n-a;i++)
{
if(sz[i]>sz[i+1]){
e=sz[i+1];
sz[i+1]=sz[i];
sz[i]=e;}
}
}
for(i=n-j;i<n-1;i++)
{

my_printf("%d,",sz[i]);
}
my_printf("%d",sz[n-1]);
return 0;
}