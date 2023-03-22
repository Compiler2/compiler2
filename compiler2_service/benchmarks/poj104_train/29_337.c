#define NUM_ITER 4861

#include <header.h>


int main_bench()
{
	int m;
	my_scanf("%d",&m);
	for(int z=0;z<m;z++)
	{
		int n;
		my_scanf("%d",&n);
                  if(n==1)
                  {
                      my_printf("2.000\n");
                           continue;
                   }
		int a=2,b=1,c=3,d=2,c1,d1;
		float s=(float)2/1+(float)3/2;
		for(int i=2;i<n;i++)
		{
			c1=c;
			d1=d;
			c=a+c;
			d=b+d;
			a=c1;
			b=d1;
			s=s+(float)c/(float)d;
		}
		my_printf("%.3f\n",s);
	}
	return 0;
}

