#define NUM_ITER 963

#include <header.h>

int main_bench(){
    int n,i,j;
    my_scanf("%d",&n);
    char zfc[n][256];
    char zf[n][256];
    
    for(i=0;i<n;i++){
        my_scanf("%s",zfc[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<255;j++){
            if(zfc[i][j]=='A'){
                zf[i][j]='T';
            }
            else if(zfc[i][j]=='T'){
                zf[i][j]='A';
            }
            else if(zfc[i][j]=='C'){
                zf[i][j]='G';
            }
            else if(zfc[i][j]=='G'){
                zf[i][j]='C';
            }
        }
    }
    for(i=0;i<n-1;i++){
        my_printf("%s\n",zf[i]);
    }
    my_printf("%s",zf[n-1]);
    return 0;
}

