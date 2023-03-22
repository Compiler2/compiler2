#include <header.h>

char  sen[200];
char m[200];
char c[200];
char check[200]; 
int main_bench()
{
    gets(sen);
    gets(m);
    gets(c);
    int mark=0;
    for(int i=0;i<strlen(sen);i++)
           if(sen[i]!=' ')
              {
               check[mark]=sen[i];
               mark++;
              }else{
                      if(!strcmp(check,m))
                        my_printf("%s ",c);
                        else
                        my_printf("%s ",check);
                        memset(check,0,sizeof(check));
                        mark=0;
                    }     
    if(!strcmp(check,m))
                        my_printf("%s\n",c);
                        else
                        my_printf("%s\n",check);
                       
    return 0;
}
