#include <header.h>

int main_bench()
{
int a[1000],b[1000];
int i,n,k,j,t=0;
my_scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
 my_scanf("%d",&a[i]);
 b[i]=a[i];
 }
for(i=0;i<n;i++){
 for(j=i+1;j<n;j++){
  if(b[j]+a[i]==k){
   my_printf("yes");
   t=1;
   break;
  }
 }
  if(t==1){
  break;}
 if((t==0)&&(i==n-1)){
 my_printf("no");
 }
}

return 0;
}