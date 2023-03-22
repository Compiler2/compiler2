#include <header.h>

int main_bench()
{
    char* s;
    char ch[101];
    char c;
    int i;
    s=ch;
    gets(ch);
    for(i=0;i<strlen(ch)-1;i++)
    {
           c=*(s+i)+*(s+i+1);
           my_printf("%c",c);   
    }
    c=*s+*(s+strlen(ch)-1);
    my_printf("%c",c);
     return 0;
}               
                             
                           
