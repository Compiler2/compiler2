#define NUM_ITER 25619

#include <header.h>

int main_bench(){
int n,zong,you,i;
double x,y;
x=0.0,y=0.0;
my_scanf("%d",&n);
my_scanf("%d %d",&zong,&you);
x=1.0*you/zong;
for(i=0;i<n-1;i++){
my_scanf("%d %d",&zong,&you);
y=1.0*you/zong;
if((y-x)*100>5){my_printf("better\n");}
else if((x-y)*100>5){my_printf("worse\n");}
else {my_printf("same\n");}
}
return 0;
}