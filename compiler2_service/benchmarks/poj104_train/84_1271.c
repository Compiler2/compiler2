#define NUM_ITER 2092182

#include <header.h>

int main_bench(){
int n,i,a,x,y;
i=1;
my_scanf("%d\n",&n);
if(n>1&&n<100){
while(i<=n){
my_scanf("%d\n",&a);
if(i==1){
x=a;
y=0;
}else if(a>x){
y=x;
x=a;
}else if(a>y&&a<x){
y=a;
}
i++;

}
my_printf("%d\n",x);
my_printf("%d\n",y);
}
return 0;
}
