#define NUM_ITER 1003734

#include <header.h>


int main_bench()
{
  int a=0,b,c,d,e,f;
  while(my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)&&a!=0)
  {
    int total=0;
	total=(12-a)*60*60+(d-1)*3600;
	total+=3600-b*60-c;
	total+=e*60+f;
	my_printf("%d\n",total);
  }
  
return 0;
}