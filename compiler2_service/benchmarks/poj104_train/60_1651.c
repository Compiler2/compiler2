#define NUM_ITER 15451

#include <header.h>

int prime(int n)
{
	int t=1;
	int i;
	if(n<2)
		t=0;
	for(i=2;i<=(n-1);i++)
		if(n%i==0)
		{
			t=0;
			break;
		}
		return t;
}

main_bench()
{
  int k,j;
  k=2;
  int c=0;
  my_scanf("%d",&j);
if(j<=4)
my_printf("empty");
else
{
  { do
  {
	  if(prime(k)&&prime(k+2))
	  {
		  c+=1;
		  my_printf("%d %d\n",k,k+2);
	  }
	  k=k+1;
  }
  while (k<(j-1));
}
}
  return 0;
}