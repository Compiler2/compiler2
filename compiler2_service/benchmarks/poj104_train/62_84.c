#define NUM_ITER 516650

#include <header.h>

int main_bench(){
   int i,j,l,k,o=0;
   char a[10000],b[10000]={' '};
   gets(a);
   l=strlen(a);
   b[o++]=a[0];
   for(i=1;i<l;i++){
        if(a[i]!=' '||a[i]==' '&&a[i-1]!=' ') b[o++]=a[i];
        }
    for(i=0;i<o;i++) my_printf("%c",b[i]);
    
    
    my_scanf("%d",&i);
    return 0;
    }