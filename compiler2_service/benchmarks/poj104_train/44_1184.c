#define NUM_ITER 446415

#include <header.h>

void fy(char c[])
{
    long s=0,i=0,t=1;
    if(c[0]=='-'&&c[1]!='0')
    {my_printf("-");
    i++;}
    for(i=i;c[i]!='\0'; i++)
    {
        s=s+(c[i]-'0')*t;
        t=t*10;
    }
    my_printf("%d\n",s);
}

int main_bench()
{
    int k;
    char a[1000];
    for(k=0;k<6;k++)
    {
           my_scanf("%s",a);
           fy(a);
    }
    return 0;
}
