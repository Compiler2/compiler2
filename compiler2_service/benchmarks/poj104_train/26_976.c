#define NUM_ITER 1348296

#include <header.h>

int main_bench() {
    char zf[101];
    int i;
    gets(zf);
    int l;
    l = strlen(zf);
    for(i=0;i<l;i++){
        if(zf[i]==' '){
           if(zf[i+1]==' '){
              zf[i+1] = '\0';           
           }      
        }
        if(zf[i]=='\0'){
           if(zf[i+1]==' '){
              zf[i+1] = '\0';           
           }             
        }
        if(zf[i]!='\0'){
           my_printf("%c",zf[i]);             
        }                                                    
    }
    return 0;
}