#define NUM_ITER 690

#include <header.h>

int main_bench()
{
	int sum=0,n,a[100][100],i,j,x1,x2,num1,num2,y1,y2;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			my_scanf("%d",&a[i][j]);
  for(i=0;i<n;i++)
  { 
    for(j=0;j<n;j++)  
      if(a[i][j]==0)
			{
					x1=i;y1=j;
          break;
			}
			if(j<n)break;
	}
	for(i=n-1;i>=0;i--)
  {
    for(j=n-1;j>=0;j--)
		  if(a[i][j]==0)
				{
					x2=i;y2=j;
          break;
				}
			  if(j>=0)break;
	}
		num1=x2-x1+1;
                num2=y2-y1+1;
		sum=(num1-2)*(num2-2);
		my_printf("%d",sum);
}