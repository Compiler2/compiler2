#define NUM_ITER 230644

#include <header.h>

int main_bench()
{
    char *p;
    p=(char *)malloc(1000*sizeof(char));
    gets (p);
    int i;
    for (i=0;*(p+i)!='\0';i++)
    {
        if (isdigit(*(p+i)))
        my_printf ("%c",*(p+i));
        if (isdigit(*(p+i))&&isdigit(*(p+i+1))==0)
        my_printf ("\n");
    }
    return 0;
}