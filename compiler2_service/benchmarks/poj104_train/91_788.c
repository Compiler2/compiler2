#define NUM_ITER 129075

#include <header.h>

int main_bench()
{
	int i,j=0;
  char *a;
  a=(char *)malloc(1000*sizeof(char));
  char *b;
  b=(char *)malloc(1000*sizeof(char));
  gets(a);
  for(i=0;;i++)
  {   
	  if(*(a+i)=='\0')
	  {
		  *(b+i)='\0';
		  break;
	  }
	  else if(*(a+i+1)=='\0') *(b+i)=*(a+i)+*(a+0);
	  else *(b+i)=*(a+i)+*(a+i+1);

  }
  for(i=0;*(b+i)!='\0';i++)
	  my_printf("%c",*(b+i));
}