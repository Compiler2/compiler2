#define NUM_ITER 31476

#include <header.h>

int main_bench(){
    int n=0,i=0,j=0,LEN=0,k=0;
    my_scanf("%d",&n);
    char zf[21];
    for(i=0;i<n;i++){
        j=0;
        my_scanf("%s",zf);
        LEN=strlen(zf);
        while(j<LEN){
            if((zf[j]>='a'&&zf[j]<='z')||(zf[j]>='A'&&zf[j]<='Z')||zf[j]=='_'||(j!=0&&zf[j]>='0'&&zf[j]<='9')){
                k=0;
                j++;
            }else{
                k=1;
                break;
            }
        }
        if(k==0){
            my_printf("yes\n");
        }else{
            my_printf("no\n");
        }
    }
    return 0;
}