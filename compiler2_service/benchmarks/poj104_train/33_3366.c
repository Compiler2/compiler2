#include <header.h>

int main_bench(){
 int n,i,j,b[1000];
 char a[1000][1000];
 my_scanf("%d",&n);
 for(i=0;i<n;i++){
   my_scanf("%s",a[i]);
   b[i]=strlen(a[i]);
 }
 for(i=0;i<n;i++){
   for(j=0;j<strlen(a[i]);j++){
     if(a[i][j]=='A'){
       my_printf("T");
     }
     if(a[i][j]=='T'){
       my_printf("A");
     }
     if(a[i][j]=='C'){
       my_printf("G");
     }
     if(a[i][j]=='G'){
       my_printf("C");
     }
     if(j==strlen(a[i])-1){
       my_printf("\n");
     }
   }
 
 }
  return 0;


}
