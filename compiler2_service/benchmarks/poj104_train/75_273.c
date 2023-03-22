#define NUM_ITER 11167

#include <header.h>

int main_bench()
{
int k=0,a[1000],b[1000],t[1000],i=0,p=0,j;char c=',';
while(c==',')  {my_scanf("%d%c",&a[i],&c); p++;i++;}c=',';i=0;
while(c==',')  {my_scanf("%d%c",&b[i],&c); i++;}
for(i=0;i<999;i++)   t[i]=0;
for(i=0;i<999;i++)
 for(j=0;j<p;j++)    if((a[j]<=i)&&(b[j]>i))  t[i]++;
for(i=0;i<999;i++)
if(t[i]>k)   k=t[i];
my_printf("%d %d",p,k);
}