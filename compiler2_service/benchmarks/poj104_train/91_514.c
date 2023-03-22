#include <header.h>

int main_bench(){
    int i,l;
    char a[200],b[200],r[200]={' '};
    gets(a);
    l=strlen(a);
    strcpy(b,a);
    for(i=0;i<l-1;i++){
        r[i]=a[i]+b[i+1];
        }
    r[l-1]=a[0]+a[l-1];
    my_printf("%s",r);
    
    my_scanf("%d",&i);
    return 0;
    }
