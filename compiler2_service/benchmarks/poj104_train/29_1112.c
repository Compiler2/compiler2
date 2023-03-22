#define NUM_ITER 2184

#include <header.h>


int main_bench()
{
  double print=0.0;
  
  int m,n;
  int i,k;
  int *arr;

  my_scanf("%d",&m);

  for(k=0;k<m;k++)
  {
    print=0.0;
    my_scanf("%d",&n);
	arr=(int*)malloc(sizeof(int)*(n+2));
	for(i=0;i<n+2;i++)
	{
	  if(i==0||i==1)
		  arr[i]=1;
	  else
		  arr[i]=arr[i-1]+arr[i-2];
	}
	for(i=0;i<n;i++)
	{
	  print+=(double)arr[i+2]/arr[i+1];
	}
     if(k<m-1)
	my_printf("%.3lf\n",print);
     else
        my_printf("%.3lf",print);
  }
return 0;
}