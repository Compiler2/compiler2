#define NUM_ITER 6139

#include <header.h>

int main_bench()
{
    int t,i,j;
    long l,n;
    my_scanf ("%d",&t);
    for (i=0;i<t;i++)
    {
        int zimu[26]={0};
        char string[100000];
        char m;
        my_scanf ("%s",string);
        l=strlen(string);
        for (j=97;j<=122;j++)
        {
            for (n=0;n<l;n++)
            {
                if (j==string[n])
                {
                   zimu[j-97]++;
                }
            }
        }
        for (j=0,n=0;j<l;j++)
        {
            if (zimu[string[j]-97]==1)
            {
               my_printf ("%c\n",string[j]) ;
               n=1;
               break;
            } 
        }
        if (n==0)
        my_printf ("no\n") ;
    }
    getchar ();
    getchar ();
}
                 
