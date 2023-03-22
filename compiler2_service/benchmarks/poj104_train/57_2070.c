#include <header.h>

int main_bench(){
    
    char n[32];
    int a,b,c,d,i,j,k,l;
    my_scanf("%d",&k);
    for(l=1;l<=k;l++){
    my_scanf("%s",n);
    b=strlen(n);
    if(n[b-1]=='g')
        b=b-3;
    if(n[b-1]=='y')
        b=b-2;
    if(n[b-1]=='r')
        b=b-2;
    for(i=0;i<b;i++)
        my_printf("%c",n[i]);
        my_printf("\n");
    }
    return 0;
}
                
                
                
                
                
                