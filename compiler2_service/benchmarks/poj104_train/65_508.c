#include <header.h>

int main_bench(){
 int n;
 my_scanf("%d",&n);
 int i,a[n],b[n];
 int m=0,j=0;
 for(i=0;i<n;i++){
  my_scanf("%d%d",&a[i],&b[i]);
  if(a[i]==b[i]){
  }else if(a[i]==b[i]-1||a[i]==b[i]+2){
   m++;
  }else{
   j++;
  }
 }
 if(m>j){
  my_printf("A");
 }else if(m==j){
  my_printf("Tie");
 }else{
  my_printf("B");
 }
return 0;
}