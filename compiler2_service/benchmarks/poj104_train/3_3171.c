#include <header.h>

int main_bench(){
    int a, r;
int n,k,sz[1000];
my_scanf("%d %d\n",&n,&k);
for(int i=1;i<=n;i++){
   my_scanf("%d",&sz[i]);
}
for(r=1;r<n;r++){
 for(a=r+1;a<=n;a++){
    if(sz[a]+sz[r]==k){
    my_printf("yes");
    break;
   }
    }
   if(a<=n)
   break;
}
    if(r>=n)
    my_printf("no");
return 0;
}

