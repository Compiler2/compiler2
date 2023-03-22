#define NUM_ITER 1337721

#include <header.h>

main_bench()
{
char s[100] = {0};
int i,len;

gets(s);

len = strlen(s);
i = 1;
my_printf("%c",s[0]);
while(s[i]!=0)
{
if(s[i]!=' ')
my_printf("%c",s[i]);
if(s[i-1]!=' '&& s[i]==' ') 
my_printf(" ");
i++;
}



}