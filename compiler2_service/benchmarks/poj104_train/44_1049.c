#define NUM_ITER 330895

#include <header.h>

int reverse(int num)
{
	int i=0,mun=0,a[10]={0},flag=0;
	if(num<0)
	{
		flag=1;
		num=-num;
	}
	while(num>0)
	{
		a[i]=num%10;
		num=(num-a[i])/10;
		mun=mun*10+a[i];
		i++;
	}
	if(flag)return -mun;
	else return mun;
}
int main_bench()
{
	int i,a[100]={0};
	for(i=0;i<6;i++)
	{
		my_scanf("%d",&a[i]);
		my_printf("%d\n",reverse(a[i]));
	}
	return 0;
}
