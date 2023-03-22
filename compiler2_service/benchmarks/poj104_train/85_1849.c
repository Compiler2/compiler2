#include <header.h>

int main_bench(){
    char zf[21];
    int n,m,a;
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
        a=1;
        my_scanf("%s",zf);
        m=strlen(zf);
        if(zf[0]==95||(zf[0]>=65&&zf[0]<=90)||(zf[0]>=97&&zf[0]<=122)){
            a=a*1;
        }else{
            a=a*0;
        }
        for(int x=1;x<m;x++){
            if(zf[x]==95||(zf[x]>=65&&zf[x]<=90)||(zf[x]>=97&&zf[x]<=122)||(zf[x]>=48&&zf[x]<=57)){
                a=a*1;
            }else{
                a=a*0;
            }
        }
        if(a==1){
            my_printf("yes");
        }else{
            my_printf("no");
        }
        my_printf("\n");
    }
    return 0;
}
