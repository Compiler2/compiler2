#include <header.h>

int main_bench()
{
   double a,f;   
   int d,e,k,i;
   char b[505];
   char c[505];
   k=0;
   my_scanf("%lf",&a);
   my_scanf("%s",b);
   my_scanf("%s",c);
   d=strlen(b);
   e=strlen(c);
   if(d!=e){
      my_printf("error");
   }else{
      for(i=0;i<d;i++){
          if(((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G'))||((c[i]!='A')&&(c[i]!='T')&&(c[i]!='C')&&(c[i]!='G'))){
             my_printf("error");
             k=1;
             break;
          }
       }
       if(k==0){
          for(i=0;i<d;i++){
              if(b[i]==c[i]){
                 k++;
              }
          }
          f=k/(d*1.0);
          if(f>a){
             my_printf("yes");
          }else{
             my_printf("no");
          }
        }
   }
   return 0;
}     

