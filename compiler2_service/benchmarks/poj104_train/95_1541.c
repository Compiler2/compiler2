#define NUM_ITER 788521

#include <header.h>

int main_bench()
{     char a[100]={0},b[100]={0};
    gets(a);
    gets(b);
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='A'&a[i]<='Z')
        {
            a[i]='a'+a[i]-'A';
        }
    }
     for(i=0;i<strlen(b);i++)
    {
        if(b[i]>='A'&b[i]<='Z')
        {
            b[i]='a'+b[i]-'A';
        }
    }int t=0;
    for(i=0;i<100;i++)
    {
        if(a[i]>b[i])
            {t=1;break;}
        if(a[i]<b[i])
        {
            t=-1;break;
        }
    }
    if(t==-1)
        my_printf("<");
    else if(t==1)
        my_printf(">");
    else my_printf("=");
    return 0;
}
