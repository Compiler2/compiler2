#define NUM_ITER 37868

#include <header.h>

int main_bench(){
    int n,i,result;
    result=0;
    my_scanf("%d\n",&n);
    int a[200][2];
    for(i=0;i<n;i++){
            my_scanf("%d%d",&a[i][0],&a[i][1]);
            if((a[i][0]==0&&a[i][1]==1)||(a[i][0]==1&&a[i][1]==2)||(a[i][0]==2&&a[i][1]==0)){
            result=result+1;
        }else if(a[i][0]==a[i][1]){
            result=result;
        }else if((a[i][0]==0&&a[i][1]==2)||(a[i][0]==1&&a[i][1]==0)||(a[i][0]==2&&a[i][1]==1))
            result=result-1;
    }
    if(result>0){
        my_printf("A");
    }else if(result<0){
        my_printf("B");
    }else if(result==0){
        my_printf("Tie");
    }
return 0;
}

