#include <header.h>

int main_bench(){
int n,k,i,j,sz[1000];
 j=1;
my_scanf("%d%d",&n,&k);
 for(i=1;i<=n;i++){my_scanf("%d",&sz[i]);} 
 for(i=j;i<n;i++){
  if(sz[j]+sz[i+1]==k){my_printf("yes");  break;}
  if(i==n-1){j++;  i=j;}
  if(j==n-1){
   if(sz[j]+sz[i+1]==k){
my_printf("yes");  
break;
}
    else{my_printf("no");}
}
}
return 0;
}