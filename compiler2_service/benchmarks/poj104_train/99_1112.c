#include <header.h>

int main_bench(){
 int n,m; 
double a,b,c,d;
 a=0;
b=0;
c=0;
d=0;
 my_scanf("%d\n",&n);
 m=n;
 int age[m];
 int i;
 for(i=0;i<m;i++){
 my_scanf("%d",&age[i]);
 }
 for(i=0;i<m;i++){
 if(age[i]<=18){
  a=a+1;
}else if(age[i]<=35){
  b=b+1;
}else if(age[i]<=60){
  c=c+1;
}else{
  d=d+1;
}
}
a=100*a/m;
b=100*b/m;
c=100*c/m;
d=100*d/m;
my_printf("1-18: %.2lf",a);
my_printf("%%\n");
my_printf("19-35: %.2lf",b);
my_printf("%%\n");
my_printf("36-60: %.2lf",c);
my_printf("%%\n");
my_printf("Over60: %.2lf",d);
my_printf("%%\n");
 return 0;
}



