#include <header.h>

int main_bench(){
    int n;
    my_scanf("%d",&n);
    char pd[n][256];
    char A,T,C,G;
    for (int i=0;i<n;i++){
        my_scanf("%s",(pd[i]));
        for(int m=0;pd[i][m]!='\0';m++){
            if (pd[i][m]=='A'){
             pd[i][m]='T';  
            }else if(pd[i][m]=='T'){
             pd[i][m]='A';   
            }else if(pd[i][m]=='C'){
                pd[i][m]='G';
            }else if(pd[i][m]=='G'){
                pd[i][m]='C';
            }
        }
    }
    for (int i=0;i<n;i++){
    my_printf("%s\n",pd[i]);
    }
    return 0;
}

