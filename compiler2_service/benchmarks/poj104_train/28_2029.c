#define NUM_ITER 1305345

#include <header.h>

int main_bench(){
    char sen[300*20];
    int i,k=0,wordlen=0,a[300];
    gets(sen);
    for(i=0;i<strlen(sen);i++){
        if(sen[i]==' '){
            if(wordlen!=0){a[k]=wordlen;
            k++;}
            wordlen=0;
        }else{wordlen++;}
    }a[k]=wordlen;
    for(i=0;i<k;i++){
        my_printf("%d,",a[i]);
    }my_printf("%d",a[k]);
        return 0;
    }

