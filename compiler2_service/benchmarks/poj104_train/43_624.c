#define NUM_ITER 1286

#include <header.h>

double cal(int i,int n,double x)
{ double s;
  if (i==n)  return x;
  else{ s=1+1/cal(i+1,n,x);return s;}
}
int main_bench()
{
	double x;int m,n,y,i,j,k;

	int a[10004]={0};
	for (i=2;i<=5000;i++)
		
	{
		if (!a[i]) 
			for(j=2;j*i<=10000;j++) 
				a[j*i]=1;
		
	}


	
   my_scanf("%d",&m); y=m/2;
   for(i=3;i<=y;i+=2)
   if (!(a[i])&&(!a[m-i])) my_printf("%d %d\n",i,m-i);
   
  
 
}