#define NUM_ITER 173501

#include <header.h>

main_bench()
{
    char c2[101];
    int i,j,n;
    for(;;)
    {
    my_scanf("%s",c2);
    if(c2[0]=='\n')break;
    my_printf("%s\n",c2);
    for(i=0,n=0;c2[i]!='\0';i++)
    {
        if(c2[i]=='(') n=i;
        
    }
    for(i=n;i>=0;i--)
    {
        if(c2[i]=='(')
           {
               for(j=i+1;c2[j]!='\0';j++)
               {
                 if(c2[j]==')')
                 {
                     c2[j]='a';c2[i]='a';break;
                 }
               }
           }
    }
    for(i=0;c2[i]!='\0';i++)
    {
        if(c2[i]=='(')my_printf("$");
        else if(c2[i]==')')my_printf("?");
        else my_printf(" ");
    }
    my_printf("\n");
    c2[0]='\n';
    }
}