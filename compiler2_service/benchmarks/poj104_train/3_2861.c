#define NUM_ITER 6238

#include <header.h>

int main_bench(){
    int n,k,i,j,h=0;
    int s[1000],g[1000];
    my_scanf("%d %d",&n,&k);
    for(i=0;i<=n-1;i++){
        my_scanf("%d",&(s[i]));
    }
    for(i=0;i<=n-1;i++){
        g[i]=k-s[i];
        for(j=0;j<=n-1;j++){
         if(g[i]==s[j]){
         h++;
         }
        }   
    }
    if(h==0){
        my_printf("no");
    }else{
        my_printf("yes");
    }
    
    return 0;
}
