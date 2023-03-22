#include <header.h>

int main_bench()
{
     char *p,*q;
     p=(char*)malloc(30*sizeof(char));
     q=p;
     gets(q);
     for(q=p;*q!='\0';q++)
     {
                          if(*q>=48&&*q<=57)continue;
                          else *q='*';
                          }
     for(q=p;*q!='\0';q++)
     {
                          if(*q!='*')my_printf("%c",*q);
                          if(*q=='*'&&*(q+1)!='*')my_printf("\n");
     }
  
 
}
