#include <header.h>

int main_bench()
{
    char s[101],s1[101];
int i;
gets(s);
for(i=0;;i++)
{
if(s[i+1]!='\0')
(*(s1+i))=(*(s+i))+(*(s+1+i));
else
{
(*(s1+i))=(*(s+i))+(*s);
*(s1+i+1)='\0';
break;
}
}
my_printf("%s",s1);
return 0;

}
