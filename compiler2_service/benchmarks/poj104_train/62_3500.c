#define NUM_ITER 1324743

#include <header.h>

int main_bench(){
    int n,a;
    char zfc[201];
    gets(zfc);
    n=strlen(zfc);
    for(int i=0;i<n;i++){
        if(zfc[i]==' '){
            a=0;
            for(int k=i+1;k<n;k++){
                if(zfc[k]==' '){
                    a++;
                }
                else{
                    break;
                }
            }
            for(int k=i+a+1;k<n;k++){
                zfc[k-a]=zfc[k];
            }
            n-=a;
        }
    }
    for(int i=0;i<n;i++){
        my_printf("%c",zfc[i]);
    }
    return 0;
}
