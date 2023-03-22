#include <header.h>

int main_bench(){
    int i,j,m,n,k;
    int a[5][5];
    for(i=0;i<5;i++){
       for(j=0;j<5;j++){ 
          my_scanf("%d",&a[i][j]);
      }
    }
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      for(k=0;k<5;k++){
       if(a[i][k]>a[i][j]){
        break;
       }
      }
     if(k<5){
      continue;
     }
   for(k=0;k<5;k++){
     if(a[k][j]<a[i][j]){
       break;
     }
    }
   if(k<5){
    continue;
   }
   my_printf("%d %d %d\n",i+1,j+1,a[i][j]);
   return 0;
   }
  }
   my_printf("not found");
   return 0;
}