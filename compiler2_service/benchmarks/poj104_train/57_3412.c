#define NUM_ITER 32078

#include <header.h>

main_bench()
{
     int n;
     my_scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
          char word[33];
          my_scanf("%s",word);
          int len;
          len=strlen(word);
          if(word[len-2]=='e'&&word[len-1]=='r')
          {
                for(int j=0;j<len-2;j++)
                    my_printf("%c",word[j]);
                my_printf("\n");
          }
if(word[len-2]=='l'&&word[len-1]=='y')
          {
                for(int j=0;j<len-2;j++)
                    my_printf("%c",word[j]);
 my_printf("\n");

          }
if(word[len-3]=='i'&&word[len-2]=='n'&&word[len-1]=='g')
          {
                for(int j=0;j<len-3;j++)
                    my_printf("%c",word[j]);
 my_printf("\n");

          }
}
}