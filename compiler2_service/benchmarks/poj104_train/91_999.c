#define NUM_ITER 1273917

#include <header.h>

int main_bench()
{
int i,l;
char s[1000],s1[1000],c;
gets(s);
l=strlen(s);
*(s+l)=*s;
for(i=0;i<l;i++)
{*(s1+i)=*(s+i)+*(s+1+i);}
*(s1+l)='\0';
my_printf("%s",s1);
}
