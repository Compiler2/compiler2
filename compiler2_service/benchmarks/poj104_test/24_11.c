#define NUM_ITER 1444700

#include <header.h>

int main_bench()
{
  char a[100][100];
  my_scanf("%s",a[0]);
  int i,j=0,k;
  for(i=1;getchar()==' ';i++)
  my_scanf("%s",a[i]);
  char (*max)[],(*min)[];
  max=&a[0];
  min=&a[0];
  for(j=1;j<i;j++)
  {    
       if(strlen(*max)<strlen(a[j]))
         max=&a[j];
       if(strlen(*min)>strlen(a[j]))
         min=&a[j];
  }
  puts(*max);
  puts(*min);

  return 0;
}