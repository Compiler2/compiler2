#define NUM_ITER 1115477

#include <header.h>

int main_bench()
{
    int i, j, t, a, ls, lw;
    char s[50], w[50];
    my_scanf("%s %s", s, w);
    ls=strlen(s);
    lw=strlen(w);
    for(j=0;j<lw;j++)
    {
        if(s[0]==w[j])
        {
            t=0;
            a=j;
            for(i=0;i<ls;i++)
            {
               if(s[i]!=w[j+i]) t=1;break; 
            }
        }
        if(t==1) break;
        if(t==0) break;
    }
    my_printf("%d\n", a);
    return 0;
}