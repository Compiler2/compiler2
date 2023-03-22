#define NUM_ITER 709879

#include <header.h>

main_bench()
{
      char a[100],c[100];
      gets(a);
      int i,b,d,e;
      if (a[1]=='\0')
            {
                 my_printf("0\n");
                 my_printf("%c",a[0]);
            }
      else if (a[2]=='\0'&&a[0]-'0'==1)
      {

            if (a[1]-'0'<3)
            {
                my_printf("0\n");
                my_printf("%c",a[0]);
                my_printf("%c",a[1]);
            }
            else
            {
                my_printf("1\n");
                my_printf("%d",a[1]-'0'-3);
            }
      }
       else
       {
            i=0;
            b=a[i]-'0';
            while (a[i]!='\0')
          {
         d=b/13;
         e=b%13;
         b=e*10+(a[i+1]-'0');
         c[i]=d+'0';


         i++;
          }
       if (c[0]=='0'&&c[1]!='0')
       {
           i=1;
           while (c[i]>='0'&&c[i]<='9')
           {
               my_printf("%c",c[i]);
               i++;
           }
       }
       else if (c[0]=='0'&&c[1]=='0')
       {
           i=2;
           while (c[i]>='0'&&c[i]<='9')
           {
               my_printf("%c",c[i]);
               i++;
           }
       }
       else
       {
           i=0;
           while (c[i]>='0'&&c[i]<='9')
           {
               my_printf("%c",c[i]);
               i++;
           }
       }
      my_printf("\n%d",e);
      }
     getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}