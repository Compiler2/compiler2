#define NUM_ITER 1364585

#include <header.h>

int main_bench()
{
    int i,len;
    char word[10000],c;
    gets(word);
    len=strlen(word);
    c=word[0];
    for(i=0;i<len-1;i++)
    word[i]+=word[i+1];
    word[i]+=c;
    my_printf("%s",word);
   
    return 0;
}
