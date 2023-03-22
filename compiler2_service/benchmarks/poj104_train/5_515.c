#include <header.h>

int main_bench(){int i,j=0;float x;char m[501],n[501];
my_scanf("%f",&x);
my_scanf("%s",m);my_scanf("%s",n);if(strlen(m)!=strlen(n)){my_printf("error");return 0;}
for(i=0;n[i];i++){if(m[i]!='A' && m[i]!='T' && m[i]!='C' && m[i]!='G' || (n[i]!='A' && n[i]!='T' && n[i]!='C' && n[i]!='G')){my_printf("error");return 0;}if(m[i]==n[i])j++;}
if(1.0*j/i>x)my_printf("yes");
if(1.0*j/i<x)my_printf("no");my_scanf("%d",&i);return 0;}
