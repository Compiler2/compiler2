#define NUM_ITER 1586169

#include <header.h>

int main_bench()
{
	char c[30],*p;
	int num=1;
	gets(c);
	for(p=c;*p!='\0';p++)
	   {
	   if((*p>47)&&(*p<58))
	      {
		  if(num==1)
	      {
		  my_printf("%c",*p);
		  num=1;
	      }
          else
          {
		  my_printf("\n%c",*p);
		  num=1;
          }
	      }
       else
          num=0;
	   }
}