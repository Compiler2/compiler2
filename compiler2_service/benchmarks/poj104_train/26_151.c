#define NUM_ITER 1518169

#include <header.h>

int main_bench()
{
    int i;
    char c[100];
    gets(c);
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]=='\t'&&c[i+1]!='\t'&&c[i+1]!=' ') my_printf(" ");
        else if((c[i]!=' '&&c[i]!='\t')||(c[i]==' '&&c[i+1]!=' '&&c[i+1]!='\t'))
        my_printf("%c",c[i]);
    }
}
