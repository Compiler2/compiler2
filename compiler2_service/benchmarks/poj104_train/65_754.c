#define NUM_ITER 35408

#include <header.h>

int main_bench()
{
	int n,i,a[200],b[200],sum=0;

	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{

		my_scanf("%d%d",&a[i],&b[i]);
          if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0))
			  sum++;
            else if((b[i]==0&&a[i]==1)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0))
              sum--;
          else if((b[i]==0&&a[i]==0)||(b[i]==1&&a[i]==1)||(b[i]==2&&a[i]==2))
              sum=sum;
		  }
	if(sum>0)
		my_printf("A");
	  
            else if(sum==0)
             my_printf("Tie"); 
          else if(sum<0)
             my_printf("B");
	return 0;
}