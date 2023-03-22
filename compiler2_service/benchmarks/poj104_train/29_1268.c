#define NUM_ITER 4373

#include <header.h>

int main_bench()
{
   int m,n;

my_scanf("%d",&m);
int i;
double a,b,c;
for(i=0;i<m;i+=1){
	my_scanf("%d",&n);
	int j;
	double s=0;
	a=2;
	b=1;
	for(j=1;j<=n;j+=1)
	{  s+=a/b;
		c=a;
	 a=a+b;
	b=c;}

my_printf("%.3lf\n",s);
}
return 0;
}