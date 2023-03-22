#define NUM_ITER 260018

#include <header.h>

int main_bench()
{
    int i;
    char *p;
    p=(char*)calloc(1000,sizeof(char));
    gets(p);
    for(i=0;*(p+i)!='\0';i++)
    {if(*(p+i)!=' ')
    my_printf("%c",*(p+i));
    else {
         if(*(p+i+1)!=' ')
         my_printf(" ");
         } 
         }                  
}