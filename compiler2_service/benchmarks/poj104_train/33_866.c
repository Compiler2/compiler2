#include <header.h>

int main_bench(){
 int n,i,j;
 my_scanf("%d",&n);
 my_scanf("\n");
 char str[256];
 for(i=0;i<n;i++){
  my_scanf("%s",str);
  for(j=0;str[j];j++){
   if(str[j]=='A'){
    my_printf("T");
   }else if(str[j]=='T'){
   my_printf("A");
   }else if(str[j]=='C'){
   my_printf("G");
   }else if(str[j]=='G'){
   my_printf("C");
   }
  }
  my_printf("\n");
}
  return 0;
 }