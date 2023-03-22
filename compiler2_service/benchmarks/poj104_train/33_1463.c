#define NUM_ITER 5550

#include <header.h>

int main_bench(){
    int n;
    my_scanf("%d",&n);
    char jianji[n][260],hubu[n][260];
    for(int i=0;i<n;i++){
        my_scanf("%s",jianji[i]);
        int len=strlen(jianji[i]);
        for(int k=0;k<len;k++){
            if(jianji[i][k]=='A'){
                hubu[i][k]='T';
            }
            else if(jianji[i][k]=='T'){
                hubu[i][k]='A';
            }
            else if(jianji[i][k]=='C'){
                hubu[i][k]='G';
            }
            else if(jianji[i][k]=='G'){
                hubu[i][k]='C';
            }
        }
        for(int k=len;k<n;k++){
            hubu[i][k]='\0';
        }
    }
    for(int i=0;i<n-1;i++){
        my_printf("%s\n",hubu[i]);
    }
    my_printf("%s",hubu[n-1]);
    return 0;
}
