#include <header.h>

int main_bench()
{
double sz[1000];
int n,a;
double b,c,q,d;
my_scanf("%d",&n);
for(int i=1;i<=n;i++){
q=0;
my_scanf("%d",&a);
d=1;
b=2;
for(int j=0;j<a;j++){
c=d+b;
sz[j]=b/d;
d=b;
b=c;
c=0;
}
for(int w=0;w<a;w++){
q=q+sz[w];
}
my_printf("%.3lf\n",q);
}
}

