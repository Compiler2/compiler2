#include <header.h>


int main_bench()
{
    int i,n,num=0,len;
    char s[100];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%s",s);
        len=strlen(s);
        if(num==0)
        {
            my_printf("%s",s);
            num=len;
            continue;
        }
       if(num+len<80)
       {
           my_printf(" %s",s);
           num=num+len+1;
           continue;
       }
       if(num+len>=80)
       {
           my_printf("\n%s",s);
           num=len;
           continue;
       }
    }
    return 0;
}
