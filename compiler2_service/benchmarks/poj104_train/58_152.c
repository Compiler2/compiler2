#include <header.h>

main_bench()
{
      int n;
      my_scanf("%d",&n);getchar();
      for(;n>0;n--)
      {
      int i=0;
         char str[88];
       for(i=0;i<88;i++)
       {
           str[i]='a';
       }  
       gets(str);
       
       
       for(i=0;i<strlen(str);i++)
       {
             if((!isalnum(str[i]))&&str[i]!='_')
             {
                 my_printf("%d\n",0);
                 goto hhh;
             }                    
       }
         
        
        
        if(isalpha(str[0])||str[0]=='_')
            {
                my_printf("%d\n",1);
            }          
         else
            {
                my_printf("%d\n",0);
            }   hhh:;
      }
}
