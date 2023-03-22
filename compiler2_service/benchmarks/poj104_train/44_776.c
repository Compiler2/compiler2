#define NUM_ITER 438942

#include <header.h>

int reverse(int n)
{
	int back=0,flag=0;
	if(n>=0&&n<=9)
		back=n;
	else
	{
		if(n<0)
		{
			flag=1;
			n=-n;
		}
		while(n>=1)
		{
			back=back*10+n%10;
			n=n/10;
		}
	}
	if(flag==0)
		return back;
	else
		return -back;
}
int main_bench()
{
	int i,a[6];
	for(i=0;i<6;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<6;i++)
		my_printf("%d\n",reverse(a[i]));
	return 0;
}