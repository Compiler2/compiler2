#define NUM_ITER 33878

#include <header.h>

int main_bench()
{
int n,s[1000],z[1000],i,j;
double a[1000];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d%d",&s[i],&z[i]);
a[i]=100.0*z[i]/s[i];
}
for(j=1;j<n;j++){
if(a[j]-a[0]+5>10)
my_printf("better\n");
 else if (a[j]-a[0]+5<0){
my_printf("worse\n");
}
else 
my_printf("same\n");
}
return 0;
}



