#include <header.h>

int main_bench(){
    char a[505],b[505];
    int i,j,m,sum=0,SUM=0;
    double e,n;



    my_scanf("%lf",&n);
    my_scanf("%s%s",&a,&b);

    if(strlen(a)!=strlen(b)){
        my_printf("error");
        }
    else{
        for(i=0;i<strlen(a);i++){
            if(((a[i]!='A')&&(a[i]!='G')&&(a[i]!='C')&&(a[i]!='T'))||((b[i]!='A')&&(b[i]!='G')&&(b[i]!='C')&&(b[i]!='T'))){
                SUM++;
                }
            else if(a[i]==b[i]){
                    sum++;
                    }
        }
        if(SUM!=0){
            my_printf("error");
            }
        else{
            m=strlen(a);
            e=(double)sum/m;
            if(e>n){
                my_printf("yes");
                }
            else{
                my_printf("no");
                }
        }
    }
    return 0;
}



