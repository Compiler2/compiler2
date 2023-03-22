#define NUM_ITER 287

#include <header.h>

int main_bench()
{
  char a[20000], temp;
  int i,j;
  j=0;
  for(i=0;i<20000;i++)
  { my_scanf("%c", &temp);
    if(temp==a[j-1]&&a[j-1]==32);
    else {
          a[j]=temp;
          my_printf("%c", a[j]);
          j++;
	}
  }
  
  return 0;
}