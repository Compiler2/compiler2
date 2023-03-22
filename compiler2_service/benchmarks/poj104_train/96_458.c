#include <header.h>

main_bench()
{
    char a[100];
    int b[100],i,s=0;
    gets(a);
    int x=0;
    for(i=0;a[i]!='\0';i++)
    {
                         b[i]=a[i]-'0';
                         s=10*s+b[i];
                         b[i]=s/13;
                         s=s-13*b[i];
                         if(b[i]!=0)
                         {
                                    my_printf ("%d",b[i]);
                                    x=1;
                         }
                         else
                         {
                             if(x==1)
                             my_printf ("%d",b[i]);
                         }
    }
    if(x==0)
    my_printf("0");
   my_printf("\n%d",s);

           
}

