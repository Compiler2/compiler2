#define NUM_ITER 1134990

#include <header.h>

 main_bench()
{
    char str1[1000];
    char str2[1000];
    char c;
    int m,i,a,b,no,d;
    no=1;
    my_scanf("%s",str1);
    a=str1[0]-48;
    b=strlen(str1);
    d=str1[1]-48;
    if(a<2&&b==2&&d<3)my_printf("0");
    if(a<10&&b<2)my_printf("%c\n%d",'0',a);
    else
    {
        for(i=0;;i++)
     {
                          m=(str1[i]-48)*10+(str1[i+1]-48);
                          str2[i]=m/13+48;
                          str1[i+1]=m%13+48;
                          if(no==1)
                          {
                                   if(str2[i]!='0')my_printf("%c",str2[i]);
                                   no=0;
                          }
                          else my_printf("%c",str2[i]);
                          if(str1[i+2]=='\0') break;
     }
    
     my_printf("\n");
     c=str1[i+1];
   
	  my_printf("%d\n",c-48);
    }
    return 0;
 }