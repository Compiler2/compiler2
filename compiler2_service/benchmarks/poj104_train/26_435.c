#define NUM_ITER 936986

#include <header.h>

int main_bench()
{
    char s[100];
	int flag=1;
    int i;
    gets(s);
   for(i=0;i<strlen(s);i++)
   if(s[i]==' ') flag=0;
   else {if(flag==0) my_printf(" ");
           my_printf("%c",s[i]),flag=1;}
    return 0;
}
 