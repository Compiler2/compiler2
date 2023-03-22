#define NUM_ITER 44309

#include <header.h>

int main_bench(){
int n,m,i,a[100],b[100],*p;
p=b;
my_scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
my_scanf("%d",&a[i]);
for(i=0;i<n;i++){
if(i<n-m) *(p+i+m)=a[i];
else *(p-n+i+m)=a[i];}
for(i=0;i<n-1;i++)
my_printf("%d ",b[i]);
my_printf("%d",b[n-1]);
return 0;}
