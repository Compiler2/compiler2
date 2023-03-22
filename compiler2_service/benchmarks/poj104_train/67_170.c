#define NUM_ITER 24995

#include <header.h>

int main_bench() {
int n,i;
double c,d;
my_scanf("%d",&n);
int a[100];
int b[100];
my_scanf("%d %d",&a[0],&b[0]);
c=b[0]*1.0000/a[0];
for(i=1;i<n;i++){
   my_scanf("%d %d",&a[i],&b[i]);
   d=b[i]*1.0000/a[i];
   if(d-c>0.05)
   my_printf("better\n");
   else if(c-d>0.05)
    my_printf("worse\n");
   else
   my_printf("same\n");
}


return 0;
}