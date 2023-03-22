#define NUM_ITER 45197

#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
int a[100];
int i;
for(i=0;i<n;i++){
my_scanf("%d",&a[i]);
}
int x;
x=n/2;
int y;
for(i=0;i<n-x;i++){
y=a[i];
a[i]=a[n-i-1];
a[n-i-1]=y;
}
for(i=0;i<n-1;i++){
my_printf("%d ",a[i]);
}
my_printf("%d",a[n-1]);
return 0;
}