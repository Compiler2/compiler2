#define NUM_ITER 40170

#include <header.h>

int main_bench()
{int n,a[300],i,temp;
float aver,c,b,sum=0;
my_scanf("%d",&n);
for (i=0;i<n-1;i++)
 my_scanf("%d ",&a[i]);
 my_scanf("%d",&a[n-1]);
for (i=0;i<n;i++)
 sum=sum+a[i];
aver=sum/n;
for(i=1;i<n;i++)
 if(a[i]>a[0])
 {temp=a[i];a[i]=a[0];a[0]=temp;}
for(i=0;i<n-1;i++)
 if(a[i]<a[n-1])
 {temp=a[i];a[i]=a[n-1];a[n-1]=temp;}

 c=a[0]-aver;b=aver-a[n-1];
 if(c>b)my_printf("%d\n",a[0]);
 else if(c<b)my_printf("%d\n",a[n-1]);
 else my_printf("%d,%d\n",a[n-1],a[0]);}