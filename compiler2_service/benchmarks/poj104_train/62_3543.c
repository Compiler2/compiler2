#define NUM_ITER 1263213

#include <header.h>

int main_bench(){
    int n,i,k=1,len;
    char zfc[201],sz[201]={0};
    gets(zfc);
    len=strlen(zfc);
    sz[0]=zfc[0];
    for(i=1;i<len;i++){
        if(zfc[i-1]==' '&&zfc[i]==' '){
        }else{
            sz[k]=zfc[i];
            k++;
        }
    }
    my_printf("%s",sz);
    return 0;
}

