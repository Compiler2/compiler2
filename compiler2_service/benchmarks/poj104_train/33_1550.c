#define NUM_ITER 26601

#include <header.h>

int main_bench(){
    int n;
    my_scanf("%d",&n);
    char sr[n][256];
    for(int i=0;i<n;i++){
        my_scanf("%s",sr[i]);
    }
    for(int i=0;i<n;i++){
        int m=strlen(sr[i]);
        for(int j=0;j<m;j++){
            if(sr[i][j]=='T'){
                my_printf("A");
            }
            if(sr[i][j]=='A'){
                my_printf("T");
            }
            if(sr[i][j]=='C'){
                my_printf("G");
            }
            if(sr[i][j]=='G'){
                my_printf("C");
            }
            if(j==m-1){
                my_printf("\n");
            }
        }
    }
    return 0;
}


