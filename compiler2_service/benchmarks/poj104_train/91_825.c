#define NUM_ITER 1260572

#include <header.h>


int main_bench()
{
char a[1000],b[1000];
int n,i;
gets(a);
n=strlen(a);
char *p=a,*q=b;

for(i=0;i<n-1;i++)
{
*(q+i)=*(p+i)+*(p+i+1);
}
*(q+n-1)=*(p+n-1)+*p;
for(i=0;i<n;i++)
my_printf("%c",*(q+i));
return 0;
}
