#define NUM_ITER 655

#include <header.h>


int main_bench(){
  int n,i,j,c,ans=0,flag=0;
  my_scanf("%d",&n);
  for (i=1;i<=n;i++){
    for (j=1;j<=n;j++){
      my_scanf("%d",&c);
      if (!c){
        if (flag){
          ans=ans+j-flag-1;
          flag=0;
        }else flag=j;
      }
    }
    flag=0;
  }
  my_printf("%d",ans);
}