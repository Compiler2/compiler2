#define NUM_ITER 1314290

#include <header.h>

char s[3001];
int len;

int main_bench()
{
    int i,miao=1,n=0;
    gets(s);
    len=strlen(s);
    for(i=0;i<=len;i++)
    {
        if(s[i]==' '||s[i]=='\0')
        {
            if(n!=0)
            {
                if(miao!=1)
                    my_printf(",");
                    my_printf("%d",n);
                    miao++;
            }
            n=0;
        }
        else
        n++;
    }
    my_printf("\n");
    return 0;
}



