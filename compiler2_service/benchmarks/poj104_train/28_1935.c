#define NUM_ITER 37068

#include <header.h>

int main_bench(){
    int i,j,k=0,l,o=0,p=0;
    char a[10000],b[10000]={' '},word[500][500]={' '},len[500]={0};
    gets(a);
    l=strlen(a);
    b[o++]=a[0];
    for(i=1;i<l;i++){
        if((a[i]==' '&&a[i-1]!=' ')||a[i]!=' ')
        b[o++]=a[i];
        }
    word[0][0]=b[0];
    for(i=0;i<o;i++){
        if(b[i]!=' ') word[k][p++]=b[i];
        else if(b[i]==' '){            
            k++;            
            p=0;
            }       
        }    
    for(i=0;i<k;i++){
        len[i]=strlen(word[i]);
        my_printf("%d,",len[i]);
        } 
    my_printf("%d",strlen(word[k]));
    
    
   
    my_scanf("%d",&i);
    return 0;
    }
