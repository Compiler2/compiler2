#define NUM_ITER 1082137

#include <header.h>

int main_bench(){
	int N;
	int a1=3,a2=5,a3=7;
	my_scanf("%d",&N);
	if (N%a1==0 && N%a2==0 && N%a3==0)
		my_printf("3 5 7\n");
	else if (N%a1==0 && N%a2==0 && N%a3!=0)
	my_printf("3 5\n");
	else if(N%a2==0&&N%a3==0&&N%a1!=0)
		my_printf("5 7\n");
	else if(N%a1==0&&N%a3==0&&N%a2!=0)
		my_printf("3 7\n");
	else if(N%a1==0&&N%a2!=0&&N%a3!=0)
		my_printf("3\n");
	else if(N%a2==0&&N%a1!=0&&N%a3!=0)
		my_printf("5\n");
	else if (N%a3==0&&N%a1!=0&&N%a2!=0)
		my_printf("7\n");
	else if(N%a1!=0&&N%a2!=0&&N%a3!=0)
		my_printf("n\n");
}
	
		


		
	