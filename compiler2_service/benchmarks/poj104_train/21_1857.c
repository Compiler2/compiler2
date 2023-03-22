#define NUM_ITER 51975

#include <header.h>

int main_bench()
{
int a[300]={0},n,i,min,max;
float sum=0,ave,mid,mad;
my_scanf("%d",&n);
for(i=0;i<n;i++){my_scanf("%d",&a[i]);sum=sum+(float)a[i];}
ave=sum/n;
min=a[0];max=a[0];
for(i=0;i<n;i++){if(a[i]<min)min=a[i];if(a[i]>max)max=a[i];}
mid=ave-min;mad=max-ave;
if(mid>mad)my_printf("%d\n",min);
else if(mid<mad)my_printf("%d\n",max);
else my_printf("%d,%d\n",min,max);
}