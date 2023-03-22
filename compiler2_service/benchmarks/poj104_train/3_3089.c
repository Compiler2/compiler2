#include <header.h>

int main_bench(){
int n,k,s;
s=0;
int sz[1000];
my_scanf("%d %d",&n,&k);
for(int i=0;i<n;i++){
my_scanf("%d ",&sz[i]);
}
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    if((sz[j]+sz[i])==k&&j!=i){
    s++;
   }}}
if(s==0){
   my_printf("no");
}else{
   my_printf("yes");
}
return 0;
}

  