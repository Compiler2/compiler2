#define NUM_ITER 5195

#include <header.h>

int main_bench(){
int m,i;
my_scanf("%d",&m);
double sz[m];
for(i=0;i<m;i++){
int n;
my_scanf("%d",&n);
int j;
double sum=0.0;
int a=2,b=1,e;
for(j=0;j<n;j++){
double t;
t=1.0*a/b;
sum+=t;
e=b;
b=a;
a=e+b;
}
my_printf("%.3lf\n",sum);
}
return 0;
}