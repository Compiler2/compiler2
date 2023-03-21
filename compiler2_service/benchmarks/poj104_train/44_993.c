#include <header.h>


int reverse(int a)
{
  int c=0;
  while(a)
  {
       c=c*10+a%10;
	   a=a/10;
 }
  return c;
}

main_bench_bench()
{
  int a,c,i,b[6];
  for(i=0;i<6;i++)
  {
	 scanf("%d",&a);
	 b[i]=reverse(a);
  }
  
  for(i=0;i<6;i++)
	  printf("%d\n",b[i]);
}