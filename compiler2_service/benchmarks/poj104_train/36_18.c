#define NUM_ITER 76948

#include <header.h>

int main_bench()
{
	int a[400]={0},b[400]={0};
	char c1[500]={0},c2[500]={0};
	int i=0;
	my_scanf("%s %s",c1,c2);
	while(c1[i]!=0)
	{
		a[c2[i]]++;
		i++;
	}
	i=0;
	while(c2[i]!=0)
	{
		b[c2[i]]++;
		i++;
	}
	for(i=0;i<400;i++) if(a[i]!=b[i]) i=1000;
	if(i!=400) my_printf("NO\n");
	else my_printf("YES\n");
}