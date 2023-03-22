#define NUM_ITER 1213111

#include <header.h>

int main_bench()
{
int i,j;
char a[50],b[50];
my_scanf("%s %s",a,b);
for(j=0;b[j]!= '\0';j++)
{
    i=0;
if(b[j]==a[i])
    {
        if(b[j+1]!=a[1])
continue;
        if(b[j++]==a[i++])
{
my_printf("%d",j-1);
return 0;
            }
    }
}
return 0;
}

