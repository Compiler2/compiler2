#define NUM_ITER 18721

#include <header.h>

int main_bench()
{int n,i,k,sz[10000],j=0,m;
my_scanf("%d",&n);
for(i=2;i<=n;i++){
   for(k=2;k<i;k++){
     if(i%k==0){
       break;}
     else if(k==i-1){
        sz[j]=i;
         j++;}
   }
   if(i==n){
      m=j;}
}
if(m==1){my_printf("empty");}
else{
  int p=1;
  for(j=0;j<m-1;j++){
   if(sz[j+1]-sz[j]==2){
       my_printf("%d %d\n",sz[j],sz[j+1]);
       p=0;
   }
  }
  if(p){ my_printf("empty");}
}
return 0;
}