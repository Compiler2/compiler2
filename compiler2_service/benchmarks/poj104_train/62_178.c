#define NUM_ITER 1272954

#include <header.h>

int main_bench()
{
    char s[2000];
    gets(s);
   char ss[2000];
   int i,j=0;
   for(i=0;i<strlen(s);i++)
     {
        if(!((s[i]==32)&&(s[i+1]==32)))
            ss[j++]=s[i];  
  
         }
   ss[j]='\0';
    my_printf("%s",ss);
    getchar();
    getchar();
    
}