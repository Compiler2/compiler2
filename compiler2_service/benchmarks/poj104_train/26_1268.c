#define NUM_ITER 1557219

#include <header.h>

int main_bench(){
    char s[101],c[101];
    gets(s);
    c[0]=s[0];
    int i,j;
    for(i=1,j=1;s[i]!='\0';i++){
        if(s[i]!=' '){
            c[j]=s[i];
            j++;
        }else{
            if(s[i-1]!=' '){
                c[j]=s[i];
                j++;
            }
        }
    }
    c[j]='\0';
    my_printf("%s",c);
    return 0;
}