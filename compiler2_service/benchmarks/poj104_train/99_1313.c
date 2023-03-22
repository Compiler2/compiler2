#define NUM_ITER 51940

#include <header.h>

int main_bench(){
int n,i;
double e=0,b=0,c=0,d=0;
int a[100];
my_scanf("%d",&n);
for(i=0;i<n;i++){
    my_scanf("%d",&(a[i]));
}
for(i=0;i<n;i++){
if(a[i]<=18)
  e++;
else if(a[i]<=35)
  b++;
else if(a[i]<=60)
  c++;
else 
  d++;
}
my_printf("1-18: %.2f%%\n",e*100/n);
my_printf("19-35: %.2f%%\n",b*100/n);
my_printf("36-60: %.2f%%\n",c*100/n);
my_printf("60??: %.2f%%\n",d*100/n);
return 0;
}
