#include <header.h>

int main_bench(){
double a[100],c[100],d[100],h;
int n,i;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%lf %lf",&a[i],&c[i]);
}
for(i=0;i<n;i++){
d[i]=c[i]/a[i];
}
for(i=1;i<n;i++){
h=d[i]-d[0];
if(h>0.05){my_printf("better\n");}
else if(h<-0.05){my_printf("worse\n");}else{my_printf("same\n");}


}



return 0;
}