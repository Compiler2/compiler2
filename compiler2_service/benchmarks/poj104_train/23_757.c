#define NUM_ITER 1447803

#include <header.h>


int turn(char *a)
{
    int i=0,j,k,n=0;
    char *p,*q;
    for (p=a;*p!='\0';p++)
        n++;
    for (p=a+n-1;p>=a;p--)
    {
        if (*p!=' ')
            i++;
        else
        {
            for (q=p+1;q<=p+i;q++)
                my_printf("%c",*q);
            my_printf(" ");
            i=0;
        }
        if (p==a)
            for (q=p;q<p+i;q++)
                my_printf("%c",*q);
    }
    
}

int main_bench()
{
    char a[100];
    gets(a);
    turn(a);
}
