#include <header.h>

int main_bench(){
    char s[110],*p;
    int len;
    gets(s);
    len=strlen(s);
    for(p=s;p<s+len;p++){
        if(p==s-1+len)
            my_printf("%c",(*p)+s[0]);
        else
            my_printf("%c",(*p)+*(p+1));
    }
    return 0;
} 
