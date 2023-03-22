#include <header.h>

int main_bench()
{
  int n,i,s;
  s=0;
  i=0;
  my_scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
	 if(i%7==0)
	     continue;
	 else if(i%10==7)
		 continue;
         else if(i/10==7)
		 continue;
	 else
		 s=s+i*i;
}
  my_printf("%d\n",s);
  return 0;
}