#define NUM_ITER 1447

#include <header.h>

int main_bench()
{
	int n,m,a[100],t,num;
	int i,j,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		t=0;
		num=0;
		my_scanf("%d",&m);
		if(m==0)
			my_printf("60\n");
		else
		{
			for(k=0;k<m;k++)
			{
				my_scanf("%d",&a[k]);
			}
			for(j=0;j<m;j++)
			{
				t=a[j]+3*(j+1);
				if(t>63)
					{
						num=60-3*j;
						break;
					}
				if(t>60&&t<=63)
					{
						num=a[j];
						break;
					}
			}
			if(t<=60)
				num=60-m*3;
			my_printf("%d\n",num);			
			
		}
	}
	
return 0;
}