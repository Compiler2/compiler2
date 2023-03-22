#include <header.h>

 int main_bench(){
  int a, b, c, n;
  my_scanf("%d", &n);
 int i;
 for(i=1;i<=n;i++){
  if(i==1){ 
    my_scanf("%d", &a);
}else if(i==2){
    my_scanf("%d", &b);
}else{
  my_scanf("%d", &c);
}
 if(a>=b && a>=c && b>=c){
   a = a;
   b = b;
}else if(a>=b && a>=c && c>=b){
      a = a;
      b = c;
      }else if(b>=a && b>=c && a>=c){
            c = a;
            a = b;
            b = c;
            }else if(b>=a && b>=c && c>=a){
                  a = b;
                  b = c;
                  }else if(c>=a && c>=b && a>=b){
                        b = a;
                        a = c;
                        }else if(c>=a && c>=b && b>=a){
                              a = c;
                              b = b;
                              }
}
my_printf("%d\n%d\n", a, b);
return 0;
}