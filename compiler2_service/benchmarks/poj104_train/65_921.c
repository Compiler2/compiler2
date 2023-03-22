#define NUM_ITER 34120

#include <header.h>

int main_bench(){
    int n,i,sz[200][2],a,b;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d %d",&sz[i][0],&sz[i][1]);
    }
    a=0;b=0;
    for(i=0;i<n;i++){
        if(((sz[i][0]==0)&&(sz[i][1]==1))||((sz[i][0]==1)&&(sz[i][1]==2))||((sz[i][0]==2)&&(sz[i][1]==0))){
            a++;
        }
        if(sz[i][0]==sz[i][1]){
            continue;
        }
        if(((sz[i][0]==1)&&(sz[i][1]==0))||((sz[i][0]==2)&&(sz[i][1]==1))||((sz[i][0]==0)&&(sz[i][1]==2))){
            b++;
        }
    }
    if(a>b){
        my_printf("A");
    }
    if(a==b){
        my_printf("Tie");
    }
    if(a<b){
        my_printf("B");
    }
    return 0;
}
