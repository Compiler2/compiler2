#define NUM_ITER 49323

#include <header.h>


int main_bench()
{
    char a[10];
    int z,q,s,l,i;
    for (i=0; i<10; i++)
        a[i] = ' ';
    for (z=1; z<=5; z++)
        for (q=1; q<=5; q++)
            for (s=1; s<=5; s++)
                for (l=1; l<=5; l++)
                {
                    if((z+q==s+l)+(z+l>s+q)+(z+s<q)==3)
                    {
                        a[z] = 'z';
                        a[q] = 'q';
                        a[s] = 's';
                        a[l] = 'l';
                    }
                }
    for (i=9; i>=1; i--)
    {
        if (a[i]!=' ')
            my_printf("%c %d\n",a[i],i*10);
    }
    return 0;
}