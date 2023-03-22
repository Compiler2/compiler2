#define NUM_ITER 1359995

#include <header.h>

int main_bench()
{
    char a[500];
    int i;
    gets(a);
    for (i=0;a[i+1]!='\0';i++)
    {
        if (a[i]==' '&&a[i+1]==' ')
        {
             continue; 
                    
        }
        my_printf("%c",a[i]);
    }
    
     my_printf("%c",a[strlen(a)-1]);
    

    return 0;
}