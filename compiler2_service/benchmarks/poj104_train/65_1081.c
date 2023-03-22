#include <header.h>

int main_bench()
{
	int sumA=0,sumB=0,i;
	int n,a,b;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d%d",&a,&b);
		if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
			sumA++;
		if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))
			sumB++;
		if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==1))
			continue;
	}
	if(sumA>sumB)
		my_printf("A");
	if(sumB>sumA)
		my_printf("B");
	else if(sumA==sumB)
		my_printf("Tie");
	return 0;
}