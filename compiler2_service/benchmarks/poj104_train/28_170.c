#include <header.h>

int main_bench()
{
  char str[1000];
  int num=0,n=0,i,j,word=0;
  int a[300];
  for (i=0;;i++)
  {
	  my_scanf ("%c",&str[i]);
    if (str[i]=='\n') break;
	else n++;
		}
  for (i=0;i<300;i++)
	  a[i]=0;
  for (i=0;i<n;i++)
  {if(str[i]==' ') {word=0;continue;}
	  else if(word==0)
	  {
		  word=1;
		  num++;
		  
	  }
      a[num-1]++;
  }
	  for (i=0;i<num-1;i++)
		  my_printf("%d,",a[i]);
	  my_printf("%d",a[i]);
}
