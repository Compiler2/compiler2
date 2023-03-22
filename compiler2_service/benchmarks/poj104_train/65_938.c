#define NUM_ITER 29852

#include <header.h>

int main_bench(){
    int n,i,k;
    my_scanf("%d",&n);
    int sz[1000][1000];
    for(i=0;i<n;i++){
        for(k=0;k<2;k++){
            my_scanf("%d",&sz[i][k]);
        }
    }
    int a=0;
    int b=0;
    for(i=0;i<n;i++){
            if(sz[i][0]==sz[i][1]){
                continue;
        }
            if((sz[i][0]==0&&sz[i][1]==1)||(sz[i][0]==1&&sz[i][1]==2)||(sz[i][0]==2&&sz[i][1]==0)){
            a++;
            }else{
            b++;
            } 
            
    }
    if(a>b){
        my_printf("A");
    } 
    if(a<b){
        my_printf("B");
    }
    if(a==b){
        my_printf("Tie");
    }
    return 0;
}
