#define NUM_ITER 9651

#include <header.h>

int main_bench()
{
  int *p;
  int n,i,e,r,k=0;
  int panduan(int a);
  my_scanf("%d",&n);
  p=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
	  p[i]=i+1;
  }
  for(i=0;i<n-2;i++)
  {
	 e=panduan(p[i]);
	 r=panduan(p[i]+2);
     if(e==1&&r==1)
	 {
		 my_printf("%d %d\n",p[i],p[i]+2);
		 k=1;
	 }

  }
  if(k==0)
	  my_printf("empty\n");
  free(p);
  return 0;
}
int panduan(int a)
{
	int i;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
			break;
	}
	if(i==a)
		return 1;
	else 
		return 0;
}