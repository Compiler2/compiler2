#include <header.h>

main_bench()
{
      int n,i,len;
      my_scanf("%d",&n);
      
      for(i=0;i<n;i++)
      {
          char letter[51]={'\0'};
          my_scanf("%s",letter);
          len=strlen(letter);
          if(letter[len-2]=='e'||letter[len-2]=='l')
              letter[len-2]='\0';
          if(letter[len-2]=='n')
              letter[len-3]='\0';
          my_printf("%s\n",letter);
          }
}
          
       
