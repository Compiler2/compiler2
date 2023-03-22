#define NUM_ITER 34461

#include <header.h>


int main_bench(){
    int m,i,j;
    my_scanf("%d",&m);
    char ba[m];
    for(j=0;j<m;j++){
    my_scanf("%s",ba);
    for(i=0;ba[i]!='\0';i++){
        if(i==0){
            if(!((ba[i]>='a'&&ba[i]<='z')||(ba[i]>='A'&&ba[i]<='Z')||ba[i]=='_')){my_printf("no\n");
                  break;
          }}
        if(i!=0){
            if(!((ba[i]>='a'&&ba[i]<='z')||(ba[i]>='A'&&ba[i]<='Z')||(ba[i]>='0'&&ba[i]<='9')||ba[i]=='_')){
                my_printf("no\n");
                break; }
        }
        if(ba[i+1]=='\0'){my_printf("yes\n");}
    }   
    }
    return 0;
}