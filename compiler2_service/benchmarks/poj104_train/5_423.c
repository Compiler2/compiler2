#include <header.h>

int main_bench(){
double r,t;
int i,k,u,z;
z=0;
u=0;
char a[500];
char b[500];
my_scanf("%lf",&r);
my_scanf("%s",a);
my_scanf("%s",b);
for(i=0;a[i]!='\0';i++){
if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'){
my_printf("error");
z=1;
break;
}
if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
my_printf("error");
z=1;
break;
}
if(b[i]=='\0'){
my_printf("error");
z=1;
break;
}
}
if(b[i]!='\0'&&z==0){
my_printf("error");
}
else if(z==0){
for(k=0;k<i;k++){
if(a[k]==b[k]){
u=u+1;
}
}
t=1.0*u/i;
if(t>r){
my_printf("yes");
}
if(t<=r){
my_printf("no");
}
}
return 0;
}