#define NUM_ITER 30

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int num[120][120];
	for(int i=0;i<n;i++)
	{
		int a,b;
		int s=0;
		my_scanf("%d%d",&a,&b);
		for(int m=0;m<a;m++)
		 for(int n=0;n<b;n++)
		  { my_scanf("%d",&num[m][n]);
		    if(m==0||m==a-1||n==0||n==b-1)
		    s+=num[m][n];
		    
	         
	}
	my_printf("%d\n",s);
	
		}
	
	
	
	}
