#define NUM_ITER 1296295

#include <header.h>

int main_bench()
{
char a[101];
gets(a);
int l=strlen(a);
int k=1;
char b[101];
b[0]=a[0];
for(int i=1;i<=l;i++)
{
if(a[i]!=' ')
{b[k]=a[i];
k++;continue;}
if(a[i-1]!=' ')
{b[k]=a[i];
k++;continue;}
}
my_printf("%s",b);
return 0;
}

