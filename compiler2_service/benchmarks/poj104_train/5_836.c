#include <header.h>

int main_bench(){
  int t,e,i,z;
  e=0;
  double x,y,k,h;
  my_scanf("%lf",&k);
  char a[510],b[510];
  my_scanf("%s",a);
  my_scanf("%s",b);
  t=strlen(a);
  if(strlen(a)!=strlen(b)){
    my_printf("error");
  }else{
     for(i=0;a[i]!='\0';i++){
       if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'){
           z++;
          }else if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
            z++;
          }else if(a[i]==b[i]){
              e++;
             }
       }
     if(z!=0){
       my_printf("error");
     }else{
     x=e;
     y=t;
     h=x/y;
     if(h>k){
       my_printf("yes");
    }else{
        my_printf("no");
    }
    }
  }
  return 0;
}
