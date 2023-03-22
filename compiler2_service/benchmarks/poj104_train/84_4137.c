#include <header.h>

int main_bench()
{
	int n;
	int number[120];
	my_scanf("%d",&n);
	int i,maxpos;
	
	for (i=0;i<n;i++)
		my_scanf("%d",&number[i]);
	int max=-100000, sndmax=-100000;
	for (i=0;i<n;i++) {
		if (number[i]>max) {
			max=number[i];
			maxpos=i;
		}
	}
	for (i=0;i<n;i++) {
		if (i==maxpos)
			continue;
		if (number[i]>sndmax)
			sndmax=number[i];
	}
	my_printf("%d\n%d\n",max,sndmax);
	return 0;
}
