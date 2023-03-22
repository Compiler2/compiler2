#define NUM_ITER 1223077

#include <header.h>

int main_bench(){
int x,y,z,r,s,t,a,m,n,p,q;
my_scanf("%d",&a);
if(a>0&&a<1000){
x=a/100;
m=a%100;
y=m/50;
n=m%50;
z=n/20;
p=n%20;
r=p/10;
q=p%10;
s=q/5;
t=q%5;
my_printf("%d\n",x);
my_printf("%d\n",y);
my_printf("%d\n",z);
my_printf("%d\n",r);
my_printf("%d\n",s);
my_printf("%d",t);
}
return 0;
}
