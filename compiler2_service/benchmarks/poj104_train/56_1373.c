#include <header.h>

int main_bench(){
    char zfc[5];
    int i,a;
    my_scanf("%s",zfc);
    for(i=0;i<strlen(zfc)/2;i++){
        a=zfc[i];
        zfc[i]=zfc[strlen(zfc)-i-1];
        zfc[strlen(zfc)-i-1]=a;
    }
    my_printf("%s",zfc);
    return 0;
}