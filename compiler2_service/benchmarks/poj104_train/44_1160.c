#define NUM_ITER 235234

#include <header.h>


void reverse(char a[10]){
    int i=0,k=0,s=0;
    char b[10];
    
    if(strcmp(a,"0")==0){
       my_printf("0\n");return;}
       
    if(strcmp(a,"-0")==0){
       my_printf("0\n");return;}
    
    if(a[0]=='-'){
       
       my_printf("-");
       k=1;
    }
    
    for(i=0;i<strlen(a)-k;++i){
        if(a[strlen(a)-1-i]=='0' && s==0)
           continue;
        else 
           s=1;
        b[i]=a[strlen(a)-1-i];
        my_printf("%c",b[i]);
    }
    my_printf("\n");
    
}

int main_bench(){
    int i,j,k=0;
    char a[10];
    for(i=0;i<6;++i){
        my_scanf("%s",a);
        reverse(a);  
    }
} 
