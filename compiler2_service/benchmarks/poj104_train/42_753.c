#include <header.h>

int main_bench()
{
	int n,k;
	int *p,*head,*chuanwei;
	int remaining;
	my_scanf("%d",&n);
	remaining=n;
	p=(int *)calloc(n+1,sizeof(int));
	head=p;
	for(;p<head+n;p++)
		my_scanf("%d",p);
	my_scanf("%d",&k);
	for(p=head;p<head+remaining;p++)
	{
		while(*p==k&&p<head+remaining)
		{
			remaining--;
			for(chuanwei=p;chuanwei<head+remaining;chuanwei++)
			{
				*chuanwei=*(chuanwei+1);
			}
		}
	}
	for(p=head;p<head+remaining-1;p++)
	{
		my_printf("%d ",*p);
	}
	my_printf("%d",*p);
	return 0;
}