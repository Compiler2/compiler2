#define NUM_ITER 148

#include <header.h>

int main_bench()
{
  char c;
  int m,n=1,i;
  int a[1001]={0};
  my_scanf("%d",&m);
  for(i=m;i<1000;i++)
	  a[i]++;
  my_scanf("%c",&c);
  while(c!='\n')
  {
	  my_scanf("%d",&m);
      for(i=m;i<1000;i++)
	  a[i]++;
	  my_scanf("%c",&c);
	  n++;
}
   my_scanf("%d",&m);
  for(i=m;i<1000;i++)
	  a[i]--;
   my_scanf("%c",&c);
   while(c!='\n')
  {
	  my_scanf("%d",&m);
      for(i=m;i<1000;i++)
	  {a[i]--;
	 
	  }
	  my_scanf("%c",&c);
   }  m=0;
   for(i=1;i<1000;i++)
	   if(a[i]>m)m=a[i];
	   my_printf("%d %d",n,m);
}

