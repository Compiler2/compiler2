#define NUM_ITER 24632

#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
float x,y,a[2],b[2];
my_scanf("%f%f",&a[0],&a[1]);
x=a[1]/a[0];
int i;
for(i=0;i<n-1;i++){
my_scanf("%f%f",&b[0],&b[1]);
y=b[1]/b[0];
if(y-x>0.05)
my_printf("better\n");
else if(x-y>0.05)
my_printf("worse\n");
else
my_printf("same\n");
}
return 0;
}