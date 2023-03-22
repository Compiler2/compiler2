#define NUM_ITER 7906

#include <header.h>

int main_bench(){
    int n,k,i,j,a=0,b=0,l[1001],m[1000000];
    my_scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        my_scanf("%d",&(l[i]));        
    }
    for(i=0;i<n-1;i++){
        for(j=1;j<=n-1-i;j++){
            a=l[i]+l[i+j];
            b++;
            m[b]=a;
        }
    }
    for(i=1;i<=b;i++){
        if(m[i]==k){
            my_printf("yes");
            break;
        }else if(i==b){
            my_printf("no");
        }
    }
    return 0;
}


