#define NUM_ITER 31586

#include <header.h>

int OK(int a,int b);
int max(int a[],int n);
int n,high[100],low[100],length[100];
int main_bench(){
int i,t=0;
my_scanf("%d",&n);
for(i=0;i<100;i++)
length[i]=0;
for(i=0;i<n;i++)
my_scanf("%d%d",&high[i],&low[i]);
for(i=0;i<n;i++)
if (OK(high[i],low[i])==1)
switch(OK(high[i+1],low[i+1])){
case 1:length[t]+=1;break;
case 0:length[t++]+=1;
}
my_printf("%d",max(length,t));
return 0;
}
int OK(int a,int b)
{return a>=90&&a<=140&&b>=60&&b<=90;}
int max(int a[],int n)
{
int i,max;
max=a[0];
for(i=1;i<n;i++)
if(max<a[i])
max=a[i];
return max;}