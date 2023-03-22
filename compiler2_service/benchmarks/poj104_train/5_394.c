#include <header.h>

int main_bench(){
double b;
char x[1000],y[1000];
int i,t,a1,a2,p1,p2;
my_scanf("%lf",&b);
my_scanf("%s",x);
my_scanf("%s",y);
t=0;a1=0;a2=0;p1=0;p2=0;
for(i=0;x[i]!=0;i++){
a1++;  
if(x[i]!='G'&&x[i]!='C'&&x[i]!='T'&&x[i]!='A'){p1++;}
}
for(i=0;y[i]!=0;i++){
a2++;  
if(y[i]!='G'&&y[i]!='C'&&y[i]!='T'&&y[i]!='A'){p2++;}
}
if(p1>0||p2>0||a1!=a2){my_printf("error");}else{
  for(i=0;y[i]!=0;i++){
   if(x[i]==y[i]){t++;}
}   if(1.0*t/a1>b){my_printf("yes");}else{my_printf("no");}
}
return 0;
}




