#include <header.h>

int main_bench()
{
	int n,i,max=0,secondmax=0;
	my_scanf("%d",&n);
	int num[100]={0};
	for(i=0;i<n;i++){
		my_scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		if(max<num[i])
			max=num[i];
	}
	for(i=0;i<n;i++){
		if(secondmax>=num[i])
			secondmax=secondmax;
		else if(num[i]==max)
	        secondmax=secondmax;
		else
			secondmax=num[i];
	}
	my_printf("%d\n%d\n",max,secondmax);
	return 0;
}

