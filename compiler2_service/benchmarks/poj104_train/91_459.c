#define NUM_ITER 142905

#include <header.h>

int main_bench()
{
    int i,j,m;
    char a[100],c[100];
    for(i=0;i<100;i++)
   { my_scanf("%c",&a[i]);
   if(a[i]=='\n')
   break;}
for(j=0;j<i-1;j++)
{c[j]=a[j]+a[j+1];}
c[i-1]=a[0]+a[i-1];
for(m=0;m<i;m++)
   {
    my_printf("%c",c[m]);}
      return 0;}