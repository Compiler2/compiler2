#include <header.h>


int proc(int i)
{
	int ans;
	if(i%2==1)
	{
		ans=i*3+1;
		my_printf("%d*3+1=",i);
	}
	else {
		ans=i/2;
		my_printf("%d/2=",i);
	}
	return ans;
}



int main_bench() {
    int n;
	my_scanf("%d",&n);
	while (n>1) {
		n=proc(n);
		my_printf("%d\n",n);
	}
	my_printf("End");
    return 0;
}
