#define NUM_ITER 919188

#include <header.h>

int main_bench(){
    char zfc[5000];
    int i,sz[1000]={0},j=0,k;
    gets(zfc);
    for(i=0;zfc[i]!='\0';i++){
        if(zfc[i]!=' '){
           sz[j]++;
        }
        if(zfc[i]==' '&&zfc[i+1]!=' '){
            j++;
        }
    }
    for(k=0;k<j;k++){
    my_printf("%d,",sz[k]);
    }
    my_printf("%d",sz[j]);
    return 0;
}