#define NUM_ITER 1122604

#include <header.h>

int main_bench()
{
	char a[100]={0},b[100]={0},*p,*q,*k;
	int out;
	my_scanf("%s",a);
	my_scanf("%s",b);
	
	for (p=b;*p!='\0';p++)
	{
		for (k=p,q=a;;k++,q++)
		{
            if(!(*q!='\0'&&*k==*q))
				break;
		}
		if (*q=='\0')
		{
			out=p-b;
			break;
		}
	}
	my_printf("%d",out);

}
