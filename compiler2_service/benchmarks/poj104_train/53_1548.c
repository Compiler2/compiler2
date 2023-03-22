#define NUM_ITER 6102

#include <header.h>

int main_bench()
{int n,i=1,j=0,m=0;
my_scanf("%d\n",&n);
int a[n];
my_scanf("%d",&a[0]);
while(i<n)
{my_scanf(" %d",&a[i]);i++;}
my_printf("%d",a[0]);i=1;
while(i<n)
{ j=i-1;m=0;  while(j>=0)
   {if(a[i]==a[j])m=1;j--;}
   if(m==0)my_printf(",%d",a[i]);i++;}
return 0;
}       