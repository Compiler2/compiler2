#define NUM_ITER 1296256

#include <header.h>

int main_bench()
{
int i,*p,len;
char s[101]={'\0'};
gets(s);
len=strlen(s);
p=&s[0];
for(i=0;i<len-1;i++)
my_printf("%c",*(s+i)+*(s+i+1));
my_printf("%c",*s+*(s+len-1));
}
