#include <header.h>

main_bench()
{
    char a[100];
    int n,i;
    my_scanf("%d",&n);
    for(;n>0;n--)
    {
        my_scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='e'&&a[i+1]=='r'&&a[i+2]=='\0'||a[i]=='l'&&a[i+1]=='y'&&a[i+2]=='\0'||a[i]=='i'&&a[i+1]=='n'&&a[i+2]=='g'&&a[i+3]=='\0')
            break;
            else
            my_printf("%c",a[i]);
        }
        my_printf("\n");
    }
}
