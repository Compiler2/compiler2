#define NUM_ITER 811260

#include <header.h>


int main_bench()
{
char a[1001];
int n,i;
n=1;
my_scanf("%s",a);

if((a[0]>96)&&(a[0]<123))
a[0]=a[0]-32;
if(1==strlen(a))
{
my_printf("(%c,%d)",a[0],n);
}
for(i=1;i<strlen(a);i++)
{
if((a[i]>96)&&(a[i]<123))
a[i]=a[i]-32;
if(a[i-1]==a[i])
{
n=n+1;
}
else
{
my_printf("(%c,%d)",a[i-1],n);
n=1;

}
if(i==(strlen(a)-1))
my_printf("(%c,%d)",a[i],n);
}

return 0;
}