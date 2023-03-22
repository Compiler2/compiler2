#define NUM_ITER 765054

#include <header.h>

main_bench()
{
    char n[102],r[102];
    int b[102],m,i;
    my_scanf("%s",n);
    if(n[1]=='\0') my_printf("0\n%s",n);


    else
    {
    if(   ((n[0]-'0')*10+n[1]-'0'<13)&&n[2]=='\0'   )
    {my_printf("0\n%s",n);}

    else
    {

    b[0]=10*(n[0]-'0')+n[1]-'0';

    for(i=0;i<=strlen(n)-2;i++)
    {
        r[i]=(b[i]/13)+'0';
        m=b[i]%13;
        b[i+1]=n[i+2]+m*10-'0';
    }

    r[strlen(n)-1]='\0';

     if(r[0]=='0')
        {
            for(i=1;i<=strlen(n)-2;i++)
            {
            my_printf("%c",r[i]);
            }
         my_printf("\n%d",m);  
        }
    else
    {
    my_printf("%s\n",r);
    my_printf("%d",m);
    }
   }
}

getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}