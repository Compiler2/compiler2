#define NUM_ITER 964851

#include <header.h>

int main_bench()
{
 int i,s;
 char a[1000];
 char *p;
 p=a;
 gets(a);
 s=0;
 for(i=0;i<=strlen(a)-1;i++)
  if(*(p+i)!=' ')
   s++;
  else
	if(*(p+i-1)!=' ')
   {
   my_printf("%d,",s);
   s=0;
   }
 my_printf("%d",s);
}