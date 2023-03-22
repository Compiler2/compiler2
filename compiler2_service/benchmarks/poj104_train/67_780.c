#include <header.h>

int main_bench()
{
	int i,n;
	int s[100],t[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&s[i],&t[i]);
	}
	float k;
	k=(double)t[0]/s[0];
	for(i=1;i<n;i++){
		if((double)t[i]/s[i]-k>0.05)
		{
			my_printf("better\n");
		}
		else if((double)t[i]/s[i]-k<-0.05)
		{
			my_printf("worse\n");
		}
		else 
		{
			my_printf("same\n");
		}
	}
	return 0;
}