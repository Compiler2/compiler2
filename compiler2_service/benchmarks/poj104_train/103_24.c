#define NUM_ITER 1400164

#include <header.h>

int main_bench()
{
    char s[1000];
    my_scanf("%s",s);
    int l=strlen(s);
    int a=s[0],n=1;
    for(int i=1;i<l;i++)
    {
            if(s[i]==a||s[i]==a+32||s[i]==a-32)
            n++;
            else
            {
                if(a>'Z')
                a=a-'a'+'A';
                my_printf("(%c,%d)",a,n);
                a=s[i];
                n=1;
            }
    }
    if(a>'Z')
    a=a-'a'+'A';
    my_printf("(%c,%d)",a,n);
    getchar();
    getchar();
}