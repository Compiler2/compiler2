#define NUM_ITER 39997

#include <header.h>

int main_bench()
{
 int a[100],b[100],num=0,i,j,n=0;
 for(i=0;i<100;i++){
 my_scanf("%d %d",&a[i],&b[i]);
 if(a[i]==0&&b[i]==0){
  n=i;
 break;
 }
 }
 for(i=0;i<n;i++){
  for(j=2;j<=a[i];j++){
  num=(num+b[i])%j;
  }
  if(i<n-1){
  my_printf("%d\n",num+1);
  }
  if(i==n-1){
  my_printf("%d",num+1);
  }
  num=0;
 }
 return 0;
}