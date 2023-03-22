#define NUM_ITER 54304

#include <header.h>

int main_bench()
{
	int n,age[101],a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
		my_scanf("%d",&age[i]);
	for(int j=0;j<n;j++)
	{
		if(age[j]<=18)
			a++;
		if(age[j]<=35&&age[j]>18)
			b++;
		if(age[j]<=60&&age[j]>35)
			c++;
		if(age[j]>60)
			d++;
	}
	my_printf("1-18: %.2lf%%\n",(double)a/n*100);
    my_printf("19-35: %.2lf%%\n",(double)b/n*100);
    my_printf("36-60: %.2lf%%\n",(double)c/n*100);
    my_printf("60??: %.2lf%%\n",(double)d/n*100);
	return 0;
}


