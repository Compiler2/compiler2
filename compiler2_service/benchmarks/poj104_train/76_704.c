#include <header.h>

int main_bench(){
    int n,i,j,A[50000][2],a,b,c=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d%d",&A[i][0],&A[i][1]);
    }
    a=A[0][0];b=A[0][1];
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(!(a>A[j][1]||b<A[j][0])){
                if(a>A[j][0]){
                    a=A[j][0];
                }
                if(b<A[j][1]){
                    b=A[j][1];
                }
            }
        }
    }
    for(i=0;i<n;i++){
        if(a>A[i][1]||b<A[i][0]){c++;}
    }
    if(c!=0){
        my_printf("no");
    }else{
        my_printf("%d %d",a,b);
    }
    return 0;
}
