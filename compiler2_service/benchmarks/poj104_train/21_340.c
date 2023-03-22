#define NUM_ITER 41540

#include <header.h>

int main_bench()
{

  int n,i,k=0;
  my_scanf("%d",&n);
  float x,nu[300];
  float d=0;
  float z=0;
  float nn[300];
  for(i=0;i<n;i++)
  {
  my_scanf("%f",&nu[i]);
  z=z+nu[i];
  
  }
  x=z/(float)n;
  for(i=0;i<n;i++)
  {
    if(x-nu[i]>d)
	{	d=x-nu[i];}
	if(nu[i]-x>d)
	{	d=nu[i]-x;}
  }
  for(i=0;i<n;i++)
  {
      if(x-nu[i]-d<=0.01&&x-nu[i]-d>=-0.01)
	  {
		  nn[k]=nu[i];
	      k++;
	  }
	  else
		  if(nu[i]-x-d<=0.01&&nu[i]-x-d>=-0.01)
		  { nn[k]=nu[i];
	      k++;}
  
  
  }
  my_printf("%.0f",nn[0]);
  for(i=1;i<k;i++)
  {
  my_printf(",%.0f",nn[i]);
  }


  return 0;
}