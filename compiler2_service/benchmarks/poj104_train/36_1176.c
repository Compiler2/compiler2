#define NUM_ITER 639495

#include <header.h>

int main_bench()
{
int i,j,x=0,y=0;
char a[10],b[10];

my_scanf("%s %s",a,b);

for(i=0;i<strlen(a);i++)x=x+a[i];
for(j=0;j<strlen(b);j++)y=y+b[j];

if(x==y)my_printf("YES");
else my_printf("NO");
}