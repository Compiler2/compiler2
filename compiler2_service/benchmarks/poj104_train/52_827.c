#include <header.h>




int main_bench()
{
	int *ptr1,*ptr2,i,n,number,a[1000];
	my_scanf("%d%d",&number,&n);
	for(i = 0; i < number; i++)
	{
		my_scanf("%d",&a[i]);
	}
	ptr1 = a;
	ptr2 = ptr1 + number - n;
	for(i = 1; i <= n; i++)
	{
		my_printf("%d ",*ptr2);
		ptr2++;
	}
	for(i = 1; i < (number - n); i++)
	{
		my_printf("%d ",*ptr1);
		ptr1++;
	}
	my_printf("%d", *(ptr1));
}
