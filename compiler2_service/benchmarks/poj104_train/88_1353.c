#define NUM_ITER 1334410

#include <header.h>

int main_bench()
{
  char c[50];
  int end,i,l;
  gets(c);
  l=strlen(c);
  end=1;
  for(i=0;i<l;i++)
  {
    if((c[i]>='0')&&(c[i]<='9'))
	 {
	   my_printf("%c",c[i]);
	   end=0;
	  }
	if(((c[i]<'0')||(c[i]>'9'))&&(end==0))
	 {
	   my_printf("\n");
	   end=1;
	 }
  }
  return 0;
}