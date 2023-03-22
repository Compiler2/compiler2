#include <header.h>


main_bench()
{
      char c;
      int flag=1,a;
      my_scanf("%c",&c);
      while(c!='\n') 
      {
           if((c==' ' && flag)||(c!=' ')) my_printf("%c",c);
           if(c==' ') flag=0;
           else flag=1;
           my_scanf("%c",&c);
      }
}
