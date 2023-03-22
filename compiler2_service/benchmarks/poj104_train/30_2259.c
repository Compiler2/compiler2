#include <header.h>

int main_bench(){
 int n,i,j;
 int sum=0;
 my_scanf("%d",&n);
 int sz[100];
 for(i=0;i<n;i++){
 sz[i]=i+1;
 if(sz[i]!=7&&sz[i]%7!=0&&sz[i]/10!=7&&sz[i]-sz[i]/10*10!=7){
 sum+=sz[i]*sz[i];};}
 my_printf("%d\n",sum);
 return 0;
}
 
 