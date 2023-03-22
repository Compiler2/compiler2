#define NUM_ITER 1229853

#include <header.h>


int main_bench()
{
 char s[80];
 int i;
 gets(s);
 for (i=strlen(s)-1; i>=0; i--)  my_printf("%c",s[i]);


 return 0;
}
