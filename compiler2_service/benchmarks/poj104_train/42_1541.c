#define NUM_ITER 37501

#include <header.h>

int main_bench(){
 int n,b[100002],i,k,m,j,m1;
 my_scanf("%d",&n);
 for(i=1;i<=n;i++){
  my_scanf("%d",&b[i]);
 }
 my_scanf("%d",&k);
 m=n;
 for(i=1;i<=n;i++){
  if(b[i]==k){m--;}
 }
 m1=m;
 for(i=1;i<=n;i++){
        if(b[i]!=k){
   m1--;
  }
  if(b[i]==k){
   for(j=i;j<=n-1;j++){
    b[j]=b[j+1];
   }
   b[n]=k;
   i=i-1;
  }
  if(m1==0){break;}
 }
 for(i=1;i<=n;i++){
  if(b[i]!=k&&m!=1){
   my_printf("%d ",b[i]);
   m=m-1;
  }
  else if(b[i]!=k&&m==1){
   my_printf("%d",b[i]);
   break;
  }
 }
 my_scanf("%d",&n);
 return 0;
} 