#define NUM_ITER 1567784

#include <header.h>

int main_bench()
{
    char c[100];
    gets(c);
    for (int i=1;c[i]!='\0';i++)
    {
        if ((c[i-1]==' ')&&(c[i]==' '))
        {
            for (int j=i;c[j]!='\0';j++) c[j]=c[j+1];
            i--;
        }
    }
    puts(c);
    return 0;
}