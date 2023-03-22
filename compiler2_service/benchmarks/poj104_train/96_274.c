#include <header.h>

main_bench()
{
    char a[1000];
    int b=0,i=0;
    my_scanf("%s",a);
    while(a[i]!='\0')
         {
             b=b*10+a[i]-'0';
             a[i]='0'+b/13;
             b=b%13;
             i++; }
    if(a[1]=='\0') my_printf("0");
    else if(a[1]=='0')
    {
           if(a[2]!='\0') my_printf("%s",&a[2]);
           else my_printf("0");
    }
    else my_printf("%s",&a[1]);
    my_printf("\n%d",b);
}


