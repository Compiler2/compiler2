#define NUM_ITER 26220

#include <header.h>

int main_bench(){
    char str[256];
    int n,i;
    my_scanf("%d",&n);
    for(int j=0;j<n;j++){
        my_scanf("%s",str);
        for(i=0;str[i]!='\0';i++){
            if(str[i]=='A'){
                str[i]='T';
            } else if(str[i]=='T'){
                str[i]='A';
            } else if(str[i]=='C'){
                str[i]='G';
            }else if(str[i]=='G'){
                str[i]='C';
            }
            if(str[i+1]!='\0'){
                my_printf("%c",str[i]);
            }
            if(str[i+1]=='\0'){
                my_printf("%c\n",str[i]);
            }
        }
    }
    return 0;
}







