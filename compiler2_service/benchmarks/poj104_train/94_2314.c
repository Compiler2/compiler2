#include <header.h>

int main_bench(){
    int N,m,n,i,j,tran;
    my_scanf("%d",&N);
    int zhengzhengshu[N];
    int jishu[N];
    for(i=0;i<N;i++){
        my_scanf("%d",&zhengzhengshu[i]);
    }
    for(i=0,j=1;i<N;i++){
        if(zhengzhengshu[i]%2==1){
            jishu[j]=zhengzhengshu[i];
            j=j+1;
        }
    }
    for(m=1;m<j;m++){
        for(n=m;n<j;n++){
            if(jishu[m]>jishu[n]){
                tran=jishu[m];
                jishu[m]=jishu[n];
                jishu[n]=tran;    
            }
        }
    }
    for(m=1;m<j;m++){
        my_printf("%d",jishu[m]);
        if(m!=j-1){
            my_printf(",");
        }
        
    }    
    return 0;  
}



