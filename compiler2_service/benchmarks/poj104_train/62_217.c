#define NUM_ITER 1505458

#include <header.h>

int main_bench()
{
    char a[1000];
    gets(a);
    int i,t;
    t=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            t++;
            if(t!=1) continue;
        }
        else t=0;
        my_printf("%c",a[i]);    
    }
    return 0;
}
           
        