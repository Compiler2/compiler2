#define NUM_ITER 886348

#include <header.h>

int main_bench(){
int s=0,i,x,y,e=0;
double r;
char a[500],b[500];
my_scanf("%lf",&r);
my_scanf("%s%s",a,b);
x=strlen(a);
y=strlen(b);
if(x!=y){my_printf("error");}
else{
    for(i=0;i<x;i++){
     if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){e=e+1;}  
     else{if(a[i]==b[i]){s=s+1;}}
    }
if(e!=0){my_printf("error");}
else{
if(1.0*s/x>r){my_printf("yes");}
else my_printf("no");}}
return 0;
}



