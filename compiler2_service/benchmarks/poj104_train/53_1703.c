#define NUM_ITER 9786

#include <header.h>


int main_bench()
{
     int n,i,j,k=0,x[310],y[310];

	 my_scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	     my_scanf("%d",&x[i]);
	 }

	 y[0]=x[0];
	 k++;
	 for(i=1;i<n;i++)
	 {
	     for(j=0;j<k;j++)
		 {
		     if(x[i]==y[j])
			     break;
		 }
		 if(j==k)
		 {
		     y[k]=x[i];
			 k++;
		 }
	 }
	 my_printf("%d",y[0]);
	 for(i=1;i<k;i++)
	 {
		 my_printf(",%d",y[i]);
	     
	 }

	 return 0;
}