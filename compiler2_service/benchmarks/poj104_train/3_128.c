#define NUM_ITER 59721

#include <header.h>

int main_bench()
{
    int n,k,i,j,s;
	int num[1000];
	my_scanf("%d%d", &n,&k);
	for(i=0;i<n;i++)
		my_scanf("%d", &num[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			s=num[i]+num[j];
			if(s==k) {s=1;break;}
			s=0;
		}
		if(s==1) break;
	}
	if(s==0) my_printf("no");
	if(s==1) my_printf("yes");
	return 0;
}