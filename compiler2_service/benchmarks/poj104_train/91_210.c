#define NUM_ITER 1242630

#include <header.h>


int main_bench()
{
char a[200];
int i,n;
gets(a);
n=strlen(a);
*(a+n)=*a;
for(i=0;i<n;i++)
my_printf("%c",*(a+i)+*(a+i+1));

return 0;}
