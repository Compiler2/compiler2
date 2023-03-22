#define NUM_ITER 61165

#include <header.h>

int main_bench(){
    int n,k,j;
    int sz[1001];
    my_scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        my_scanf("%d",&(sz[i]));
    }
    int l=0;
    while(l<n-1){j=l+1;
    while(j<n){
    if(sz[l]+sz[j]==k){my_printf("yes");
    return 0;
    }j++;
    }
    l++;
    }
    my_printf("no");
    return 0;
}
