#define NUM_ITER 24837

#include <header.h>

int main_bench(){
    int n=0,i=0,j=0,LEN=0,k=0;
    my_scanf("%d",&n);
    char zf[256];
    for(i=0;i<n;i++){
        j=0;
        my_scanf("%s",zf);
        LEN=strlen(zf);
        while(j<LEN){
            if(zf[j]=='A'){
                zf[j]='T';
            }else if(zf[j]=='T'){
                zf[j]='A';
            }else if(zf[j]=='C'){
                zf[j]='G';
            }else if(zf[j]=='G'){
                zf[j]='C';
            }
            j++;
        }
        my_printf("%s\n",zf);
    }
    return 0;
}
