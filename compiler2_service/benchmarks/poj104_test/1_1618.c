#include <header.h>

int main_bench(){
  int hanshu(int k,int min);
  int n,i,a;
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
      my_scanf("%d",&a);
      my_printf("%d\n",hanshu(a,2));
     }
  my_scanf("%d",&n);
  return 0;
}
  int hanshu(int k,int min){
      int j,a[k],b=1;
      if(k<min)return 0;
      for(j=min;j<=k/j;j++){
         if(k%j==0){
           b+=hanshu(k/j,j);
           }
         }
      return(b);
     }
