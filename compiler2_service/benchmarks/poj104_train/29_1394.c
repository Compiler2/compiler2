#include <header.h>



int main_bench()
{
	int m,n;
	float a=1,b=2,c,s=0;
	my_scanf("%d",&m);
	float *result=(float *)malloc(sizeof(float)*m);
	for(int i=0;i<m;i++)
	{
		my_scanf("%d",&n);
		for(int k=0;k<n;k++)
		{
			s+=b/a;
			c=a+b;
			a=b;
			b=c;
			
		}
		result[i]=s;
		s=0;
		a=1;
		b=2;
	}
	for(int i=0;i<m;i++) my_printf("%.3f\n",result[i]);
	return 0;
}