#define NUM_ITER 38609

#include <header.h>

int main_bench(){
    int n,a,b,i;
    a=b=i=0;
    int sz[2];
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d%d",&sz[0],&sz[1]);
        if(sz[0]==0&&sz[1]==1){a++;}else if
        (sz[0]==0&&sz[1]==2){b++;}else if
        (sz[0]==1&&sz[1]==0){b++;}else if
        (sz[0]==1&&sz[1]==2){a++;}else if
        (sz[0]==2&&sz[1]==0){a++;}else if
        (sz[0]==2&&sz[1]==1){b++;}
    }
    if(a>b){my_printf("A");}
    if(a==b){my_printf("Tie");}
    if(a<b){my_printf("B");}
    return 0;
    
}
