#define NUM_ITER 1325555

#include <header.h>

int main_bench()
{
    char string[105];
    gets (string);
    int l,i,j;
    l=strlen (string);
    for (i=0;i<l;i++)
    {
        if (string[i]==' ' && string[i+1]==' ')
        {
            for (j=i;j<l;j++)
            {
                string[j]=string[j+1];
            }
            i=i-1;
        }
    }
    my_printf ("%s",string);
    getchar ();
    getchar ();
}
    
