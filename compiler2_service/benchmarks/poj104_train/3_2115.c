#define NUM_ITER 57855

#include <header.h>

int main_bench()
{
int n,k,i,j;
my_scanf("%d%d",&n,&k);
int a[n];
char p;
for(i=0;i<n;i++)
{
    my_scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=1;j<n;j++)
    {
        if(a[i]+a[j]==k)
        {
            p='y';
            my_printf("yes");
            break;
        }
        else
        continue;
        }
    if(p=='y')
    break;
    else
    continue;
}
if(p=='y')
return 0;
else
my_printf("no");
return 0;
}
