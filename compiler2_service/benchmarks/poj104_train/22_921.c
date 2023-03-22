#include <header.h>

int main_bench()
{
  char c=',';
  int n,a=-1,b=-1;
  while(c==',')
  {
    my_scanf("%d%c",&n,&c);
    if(n>a)
    {
      b=a;
      a=n;
    }
	else
	{
      if(n>b&&n<a)
	  {
	    b=n;
	  }
 
	}
  }
  if(b!=-1)
  {
    my_printf("%d",b);
  }
  else
  {
    my_printf("No");
  }
  return 0;
}