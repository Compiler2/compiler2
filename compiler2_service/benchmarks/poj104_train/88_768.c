#define NUM_ITER 1558469

#include <header.h>

int main_bench()
{char c[31],*p;
int i,j,k;
gets(c);

p=c;
for(;*p!='\0';p++)
{if(((int)*p>47&&(int)*p<58)&&((int)*(p+1)>47&&(int)*(p+1)<58))
my_printf("%c",*p);
else
if(((int)*p>47&&(int)*p<58)&&((int)*(p+1)<48||(int)*(p+1)>57))
my_printf("%c\n",*p);}
}