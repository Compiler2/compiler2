#define NUM_ITER 801927

#include <header.h>


int main_bench()
{
    char str[101], aim[101], change[101];
    
    gets(str);
    gets(aim);
    gets(change);
    
    int i;
    int count;
    char tword[101];
    count = 0;
    tword[count]='\0';
    for(i=0;i<strlen(str);i++)
    {
                              if(str[i]!=' '&&str[i]!=',')
                              {
                                                tword[count] = str[i];
                                                count++;
                                                }
                              else
                              {
                                  tword[count]='\0';
                                  if(strcmp(tword, aim) == 0)
                                  {
                                                   my_printf("%s ", change);
                                                   }
                                  else
                                      my_printf("%s ", tword);
                                  count = 0;
                                  tword[count]='\0';
                                  }
                              }
    tword[count]='\0';
    if(strcmp(tword, aim) == 0)
    {
                     my_printf("%s", change);
                     }
    else
        my_printf("%s", tword);
    return 0;
}