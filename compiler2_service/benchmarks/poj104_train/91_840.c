#define NUM_ITER 1454284

#include <header.h>

int main_bench()
{
    char *p;
    char s[10000];
    int i=0;
    
    gets(s);
    p=s;
    for (p=s;*p!='\0';p++){
        if (*p!='\0') i++;
    }
    
    for (p=s;p<s+i-1;p++){
        my_printf("%c",*p+*(p+1));
    }
    p=s;
    my_printf("%c",*p+*(p+i-1));
    
}