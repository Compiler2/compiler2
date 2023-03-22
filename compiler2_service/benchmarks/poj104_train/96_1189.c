#define NUM_ITER 1016808

#include <header.h>

int main_bench()
{
    char s[101];
    int a[100]={0},b[100]={0},c,i;
    my_scanf("%s",s);
    c=strlen(s);
    for(i=0;i<c;i++) a[i]=s[i]-'0';
    for(i=0;i<c-1;i++)
    {
        b[i]=(a[i]*10+a[i+1])/13;
        a[i+1]=(a[i]*10+a[i+1])%13;            
    }
    if(c>2)
    {
        if(b[0]!=0) my_printf("%d",b[0]);
        for(i=1;i<c-1;i++)  my_printf("%d",b[i]);
        my_printf("\n");
        my_printf("%d",a[c-1]);
    }
    else
    {
        my_printf("%d",b[0]);
        my_printf("\n");
        my_printf("%d",a[c-1]);
    }
       
}
