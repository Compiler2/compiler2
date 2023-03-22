#define NUM_ITER 945825

#include <header.h>


main_bench()
{
  char *p,s[200],l,i;
  p=s;
  gets(p);
  l=strlen(p);
  for(i=l+1;i>=0;i--)
  { 
	  if(*(p+i)==' ')
	  {my_printf("%s ",p+i+1);
	  *(p+i)='\0';}
  
  }
  my_printf("%s",p);

}