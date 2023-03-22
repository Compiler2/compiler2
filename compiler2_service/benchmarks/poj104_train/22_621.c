#define NUM_ITER 113713

#include <header.h>

int main_bench()
{
int a[300]={0},i,j=0,k,n,m=0;
char b;
for(i=0;i<300;i++)
{
my_scanf("%d%c",&a[i],&b);
j++;
if(b=='\n') break;
}
if(j!=1)
{
for(k=0;k<j-1;k++)
{
for(i=k;i<j;i++)
{
if(a[k]<a[i])
n=a[k],a[k]=a[i],a[i]=n,m=m+1;
}
}
if(m==0&&i>0)
my_printf("No");
if(m!=0)
{ 
for(i=0;i<j-1;i++)
{
if(a[i]!=a[i+1]&&a[i+1]!=0)
break;
}
my_printf("%d",a[i+1]);
}

}
if(j==1)
my_printf("No");
}








