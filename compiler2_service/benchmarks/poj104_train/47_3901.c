#define NUM_ITER 48822

#include <header.h>


int main_bench()
{
 int * array;
 int n,i,buffer;
 my_scanf("%d",&n);
 array=(int *)malloc(sizeof(int) * n);
 for (i=0;i<n;i++)
 {
  my_scanf("%d",(array+i));
 }
 for (i=0;i<=(n-1)/2;i++)
 {
  buffer=* (array+i);
  * (array+i)=* (array+(n-i-1));
  * (array+(n-i-1))=buffer;
 }
 int first;
 first=1;
 for (i=0;i<n;i++)
 {
  if (first)
  {
   my_printf("%d",* (array+i));
   first=0;
  }
  else 
  {
   my_printf(" %d",* (array+i));
  }
 }
 free(array);
 return 0;
}

 
