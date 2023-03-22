#include <header.h>

main_bench()
{
    int i,j,n;
    char s[81];
    my_scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        gets(s);
        for(j=0;s[j]!='\0';j++)
        {
            if((s[j]=='_')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'&&j>0))
            {;}
            else
            break;
        }
        if(s[j])
        my_printf("0\n");
        else
        my_printf("1\n");
    }
}
