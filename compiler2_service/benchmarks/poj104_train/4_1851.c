#define NUM_ITER 450

#include <header.h>

int main_bench()
{
     int *p[1000],n,m,i,j,t;
	 my_scanf("%d%d",&n,&m);
	 for(i=0;i<n;i++)
	 {
		 p[i]=(int *)malloc(1000);
		 for(j=0;j<m;j++)
			 my_scanf("%d",*(p+i)+j);
	 }
	
	for(j=0;j<m+n-1;j++)
	{
		if(j<m)
			t=0;
		else
			t=j-m+1;
		for(i=t;i<n&&i<=j;i++)
			my_printf("%d\n",*(*(p+i)+j-i));
	}
	
		 return 0;
}

