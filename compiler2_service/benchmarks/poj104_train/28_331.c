#include <header.h>

int main_bench()
{
    char chuan[10000];
    int i,j=0;
    char *p=chuan;
    gets(chuan);
    for (i=0;chuan[i]!='\0';i++)
    {
        if(chuan[i]!=' ')
        {
            j=j+1;
        }    
        if(chuan[i]==' '&&chuan[i-1]!=' ')
        {
            my_printf("%d,",j);
            j=0;
        }   
    }
    my_printf("%d",j);
}