#include <header.h>

int main_bench(){
double a,b;
double sum[100]={0};
a=2;
b=1;
int n;
int j;
int e;
int m;
my_scanf("%d",&n);
int k;
for(k=0;k<n;k++){
my_scanf("%d",&m);
for(j=0;j<m;j++){
sum[k]+=a/b;
e=b;
b=a;
a=e+a;}
a=2;
b=1;

my_printf("%.3lf\n",sum[k]);
}
return 0;
}
