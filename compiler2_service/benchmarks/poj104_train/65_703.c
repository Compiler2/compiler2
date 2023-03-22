#include <header.h>

int main_bench() {
    int n,i,j,sz[199][2];
    my_scanf("%d\n",&n);
    for(i=0;i<n;i++){
        my_scanf("%d %d\n",&(sz[i][0]), &(sz[i][1]));
    }
    j=0;
    for(i=0;i<n;i++){
        if(sz[i][1]-sz[i][0]==1||sz[i][0]-sz[i][1]==2){
            j++;
        }
        if(sz[i][1]-sz[i][0]==-1||sz[i][0]-sz[i][1]==-2){
            j--;
        }
    }
    if(j>0){
        my_printf("A");
    }
    if(j==0){
        my_printf("Tie");
    }
    if(j<0){
        my_printf("B");
    }
    return 0;
}