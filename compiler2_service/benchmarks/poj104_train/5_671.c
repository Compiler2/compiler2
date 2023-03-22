#include <header.h>

int main_bench(){
 int i,q=0;
 double n,A,B,p=0.0;
 char a[500],b[500];
 my_scanf("%lf",&n);
 char c=getchar();
 gets(a);
 gets(b);
 A=strlen(a);
 B=strlen(b);
if(A!=B){
  my_printf("error");
 }
 if(A==B){
  for(i=0;i<A;i++){
   if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
    q=1;
    my_printf("error");
    break;
   }
  }
        if(q==0){
   for(i=0;i<A;i++){
       if(a[i]==b[i]){
        p+=1.0;
    }
   }
   if((p/A)>n){
    my_printf("yes");
            }else{
    my_printf("no");
   }
  }
 }

 return 0;
}