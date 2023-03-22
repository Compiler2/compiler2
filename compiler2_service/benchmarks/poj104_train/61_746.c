#define NUM_ITER 3372

#include <header.h>


int main_bench()
{
  int *arr;
  int n,i,k;
  int a;
   
  my_scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    my_scanf("%d",&a);
	arr=(int*)malloc(sizeof(int)*a);
	for(k=0;k<a;k++)
	{
	  if(k==0||k==1)
         arr[k]=1;
	  else
		  arr[k]=arr[k-1]+arr[k-2];
	}
	 my_printf("\n%d\n",arr[a-1]);
  }
 
  return 0;
}