#define NUM_ITER 797798

#include <header.h>

int main_bench()
{
    int num=0,i;
    char a[10000];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]!=' ')
        {
            num++;
            if(i==strlen(a)-1)
            {
                my_printf("%d",num);
            }
        }
        else if(a[i]==' '&&a[i+1]!=' ')
        {
            my_printf("%d,",num);
            num=0;
        }
    }   
   return 0;
}