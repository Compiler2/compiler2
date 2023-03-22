#define NUM_ITER 27305

#include <header.h>

int main_bench()  {
   int i,x,m,n,b,c;
   char a[21];
   my_scanf("%d",&n);
   for(m=0;m<n;m++){
   my_scanf("%s",a);
   x=strlen(a);
   if((a[0]=='_')||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')){
   b=0;
   }  else {
   b=1;}
   for(i=1;i<x;i++) {
   if((a[i]=='_')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0')&&a[i]<='9')
   {c=0;}
   else {c=1;break;}}
   if(b==1||c==1) {my_printf("no\n");}
   else{my_printf("yes\n");}
 }
   return 0 ;
 }
