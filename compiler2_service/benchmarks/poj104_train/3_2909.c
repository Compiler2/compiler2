#include <header.h>

int main_bench(){
    int n,k,i,s,j,m;
    s=0;
    m=0;
    int sz[1000];
    my_scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        my_scanf("%d",&(sz[i]));
    }
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           m=sz[i]+sz[j];
        if(m==k){
            my_printf("yes");
            return 0;
        }
    }
    }
    my_printf("no");
    return 0;
}
    

