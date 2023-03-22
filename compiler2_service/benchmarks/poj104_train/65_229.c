#include <header.h>

int main_bench(){
 int i,n,a,b,j=0,l=0;
 my_scanf("%d",&n);
 for(i=0;i<n;i++){
  my_scanf("%d%d",&a,&b);
  if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
    j=j+1;
  }else if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0)){
    l=l+1;
  }
 }
 if(j>l){
  my_printf("A");
 }else if(j<l){
  my_printf("B");
 }else{
  my_printf("Tie");
 }
 return 0;
} 