#define NUM_ITER 1491988

#include <header.h>

int main_bench()
{char a[200],b=' ';int i;
gets(a);
for(i=0;a[i]!=0;i++)
if(a[i]!=b||a[i+1]!=b)
my_printf("%c",a[i]);}