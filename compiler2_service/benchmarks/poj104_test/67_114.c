#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);

int i,j;
double c[10000][2];
for(i=0;i<n;i++){
	for(j=0;j<2;j++){
my_scanf("%lf",&c[i][j]);
}}
double a[10000];
for(i=0;i<n;i++){
a[i]=c[i][1]/c[i][0];
}
for(i=1;i<n;i++){
	if(a[i]-a[0]>0.05){

my_printf("better\n");
}
 if(a[0]-a[i]>0.05){

my_printf("worse\n");
}
    if((0.05>(a[0]-a[i]))&&(0.05>(a[i]-a[0]))){

my_printf("same\n");
}
}

return 0;}
