#include <header.h>

int main_bench(){
int m,i,n,j,t;
int p=2,q=1;
double sum=0.000;
my_scanf("%d",&m);
for(i=1;i<=m;i++){
my_scanf("%d",&n);
for(j=1;j<=n;j++){
sum+=p*1.000/q;
t=q;
q=p;
p=q+t;
if(j==n){
	continue;
}
}
my_printf("%.3lf\n",sum);
sum=0.000;
p=2;
q=1;
}
return 0;
}