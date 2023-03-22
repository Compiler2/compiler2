#define NUM_ITER 591

#include <header.h>

	int main_bench(){
	
		int a,b,n=0,q,i,k,m,o;
		int sz[100][100];
		my_scanf("%d",&a);
		my_scanf("%d",&b);
		o=0;
		int x=0;
		m=a*b;
		for(i=0;i<a;i++)
		{
			for(k=0;k<b;k++)
			{
				my_scanf("%d",&sz[i][k]);
			}
		}
	if(a%2!=0)
		{
			q=a+1;
			
		}
		while(1)
		{
			if(b-2*n>0)
			{
			for(k=n;k<b-n;k++)
			{
					my_printf("%d\n",sz[n][k]);
			}
			}
			if(b-2*n<=0)
			{
				break;
			}
			n++;
			if(a-2*n>=0)
			{
			for(k=n;k<=a-n;k++)
			{
					my_printf("%d\n",sz[k][b-n]);
			}
			}
			
			if(a-2*n<0)
			{
				break;
			}
			if(b-2*n>=0)
			{
			for(k=b-n-1;k>=n-1;k--)
			{
					my_printf("%d\n",sz[a-n][k]);
			}	
			}

			if(b-2*n<0)
			
			{
				break;
			}
			if(a-1-2*n>=0)
			{
			for(k=a-n-1;k>n-1;k--)
			{
					my_printf("%d\n",sz[k][n-1]);
			}
			}
			if(a-2*n-1<0)
			{
				break;
			}
			
		}
	
		return 0;
	}