#define NUM_ITER 30386

#include <header.h>

int main_bench(){
    int i,j,l,k=0,o=0,p=0,len[1000]={0};
    char a[100000]={' '},b[100000]={' '},c[1000][100]={' '};
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++){
        if(a[i]!=' '||a[i]==' '&&a[i-1]!=' '){
            b[o++]=a[i];
            }
        }
    for(i=0;i<o;i++){
        if(b[i]!=' ') c[k][p++]=b[i];
        else if(b[i]==' '){
            k++;
            p=0;
            }
        }
    for(i=0;i<k;i++){
        len[i]=strlen(c[i]);
        my_printf("%d,",len[i]);
        }
    my_printf("%d",strlen(c[k]));
    
    
    
    my_scanf("%d",&i);
    return 0;
    }