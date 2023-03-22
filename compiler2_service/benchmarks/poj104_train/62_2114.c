#define NUM_ITER 386658

#include <header.h>

int main_bench()
{
    char ch;
    int flag=0;
    while((ch=getchar())!='\n')
    {
             if(ch==' '&&flag==0)
             {
                      putchar(ch);
                      flag=1;
             }
             else if(ch!=' ') 
             {
                  flag=0;
                  putchar(ch);
             }
   }
   getchar();
   getchar();
   getchar();
}
