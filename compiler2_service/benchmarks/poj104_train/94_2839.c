#define NUM_ITER 16455

#include <header.h>

 int main_bench(){
  int N,a[500],b[500];
  int i,j,m,r;
  my_scanf("%d\n",&N);
  for(i=0;i<N;i++){
   my_scanf("%d ",&a[i]);
   }
   my_scanf("%d\n",&a[N-1]);
   for(j=0,i=0,m=0;i<N;i++){
    if(a[i]!=2&&a[i]%2!=0){
     b[j]=a[i];
     j++;
     m++;
     }
    }
  for(i=0;i<m;i++){
    for(j=m-1;j>i;j--){
     if(b[j]<b[j-1]){
      r=b[j];
      b[j]=b[j-1];
      b[j-1]=r;
     }
    }
   }
    my_printf("%d",b[0]);
    for(j=1;j<m;j++){
     my_printf(",%d",b[j]);
    }
     return 0;
}