#define NUM_ITER 4095

#include <header.h>

int main_bench() 
{ 
int i,n,j,k; 
double a[1000],b[1000]; 
double c[1000],sum[100]={0}; 
my_scanf("%d",&n); 
a[0]=2; 
a[1]=3; 
b[1]=2; 
b[0]=1; 
for(i=2;i<1000;i++) 
{ 
a[i]=a[i-1]+a[i-2]; 
b[i]=a[i-1]; 
} 
for(i=0;i<1000;i++){ 
c[i]=a[i]/b[i]; 
} 
for(j=0;j<n;j++) 
{ 
sum[j]=0; 
my_scanf("%d",&k); 
for(i=0;i<k;i++) 
{ 
sum[j]=sum[j]+c[i]; 
} 
my_printf("%.3lf\n",sum[j]); 
} 
return 0; 
} 