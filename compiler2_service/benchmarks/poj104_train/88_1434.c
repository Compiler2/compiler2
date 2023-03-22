#define NUM_ITER 1350084

#include <header.h>


int main_bench()
{
  int i,j,k;
  char c[50];
  gets(c);
  k=strlen(c);
  for(i=0;i<k;i++)
  {
   if(c[i]>=48&&c[i]<=57)
   {
    if(c[i+1]>=48&&c[i+1]<=57)my_printf("%c",c[i]);
    else
    my_printf("%c\n",c[i]);
   }
  }
	
  return 0;
}
