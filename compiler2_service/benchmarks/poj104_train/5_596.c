#define NUM_ITER 914028

#include <header.h>

int main_bench()
{
    int i;
    double n,j=0;
    my_scanf("%lf\n",&n);
    char a[501],b[501];
    my_scanf("%s\n",a);
    my_scanf("%s\n",b);
    if(strlen(a)!=strlen(b)){
        my_printf("error");
    }else{
    for(i=0;a[i]!='\0';i++){
        if((b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')&&(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')){
        if(a[i]==b[i]){
            j++;
        }
    }else{
        my_printf("error");
        return 0;
    }
    }
    i=strlen(a);
    j=j/i;
    if(j>n){
        my_printf("yes");
    }else{
        my_printf("no");
    }
    }
    return 0;
}



