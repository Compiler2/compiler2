#define NUM_ITER 1335462

#include <header.h>


int main_bench()
{
    char c[31];
    gets(c);
    int i=0,j;
    int a=0,b=0,num=0,len;
    len=strlen(c);
    while (i<=len)
    {
        if ((c[i]<='9')&&(c[i]>='0'))
        {
            if (num==0) a=i;
            b=i;num++;
        }
        else
        {
            if (num>0)
            {
                for (j=a;j<=b;j++)
                {
                    my_printf("%c",c[j]);
                }
                my_printf("\n");
                b=i;num=0;
            }
        }
        i++;
    }
    return 0;
}
