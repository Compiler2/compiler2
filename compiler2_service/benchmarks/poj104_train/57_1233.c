#define NUM_ITER 22464

#include <header.h>

int main_bench(){
    int n,i,j,LEN;
    my_scanf("%d",&n);
    char zf[33],jg[33];
    for(i=0;i<n;i++){
        my_scanf("%s",zf);
        LEN=strlen(zf);
        for(j=0;j<LEN;j++){
            if(j==LEN-3&&zf[j+2]=='g'){
                zf[j]=0;
                zf[j+1]=0;
                zf[j+2]=0;
                break;
            }else if((j==LEN-2&&zf[j+1]=='y')||(j==LEN-2&&zf[j+1]=='r')){
                zf[j]=0;
                zf[j+1]=0;
                break;
            }
        }
        LEN=strlen(zf);
        for(j=0;j<LEN;j++){
            if(zf[j]!=0){
                jg[j]=zf[j];
            }
        }
        jg[j]='\0';
        my_printf("%s\n",jg);
        
    }
    return 0;
}

