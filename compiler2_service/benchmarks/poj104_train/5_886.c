#define NUM_ITER 851734

#include <header.h>

int main_bench(){
int i,x,y,m=0,c=1;
double z,w;
char a[1000],b[1000];
my_scanf("%lf\n",&z);
my_scanf("%s\n%s",a,b);
x=strlen(a);
y=strlen(b);
if(x!=y){
  my_printf("error");c=0;
}
else{
for(i=0;i<x;i++){
if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){my_printf("error");c=0;break;}
else if(a[i]==b[i]){m++;
w=1.0*m/x;}
}}

if(c!=0){if(w>z)my_printf("yes");else my_printf("no");}

return 0;
}