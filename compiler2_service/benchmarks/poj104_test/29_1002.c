#define NUM_ITER 5428

#include <header.h>

int main_bench(){
double a;
int m,y,x[100],b,c,d;
x[0]=1;
x[1]=2;
for(y=2;y<100;y++){
   x[y]=x[y-1]+x[y-2];
}
my_scanf("%d",&m);
a=2;
for(b=0;b<m;b++){
    my_scanf("%d",&c);
	for(d=1;d<c;d++){
	a=a+1.0*(x[d-1]+x[d])/x[d];}
    my_printf("%.3lf\n",a);
	a=2;
}
return 0;
}