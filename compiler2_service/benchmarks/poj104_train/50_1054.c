#define NUM_ITER 53190

#include <header.h>

int main_bench()
{
	int xq[365];
	int i,w,f=0;
	my_scanf("%d",&w);
	for(i=0;i<365;i++){
		xq[i]=(w+i)%7;
		if(xq[i]==0)
			xq[i]=7;
	}
	if(xq[12]==5){
		if(f!=0)
			my_printf("\n");
		my_printf("1");
		f++;
	}
	if(xq[43]==5){
		if(f!=0)
			my_printf("\n");
		f++;
		my_printf("2");
	}
	if(xq[71]==5){
		if(f!=0)
			my_printf("\n");
		f++;
		my_printf("3");
	}
	if(xq[102]==5){
		if(f!=0)
			my_printf("\n");
		f++;
		my_printf("4");
	}
	if(xq[132]==5){
		if(f!=0)
			my_printf("\n");
		f++;
		my_printf("5");
	}
	if(xq[163]==5){
		if(f!=0)
			my_printf("\n");
		f++;
		my_printf("6");
	}
	if(xq[193]==5){
		if(f!=0)
			my_printf("\n");
		f++;
		my_printf("7");
	}
	if(xq[224]==5){
		if(f!=0)
			my_printf("\n");
		f++;
		my_printf("8");
	}
	if(xq[255]==5){
		if(f!=0)
			my_printf("\n");
		f++;
		my_printf("9");

	}
	if(xq[285]==5){
		if(f!=0)
			my_printf("\n");
		f++;
		my_printf("10");
	}
	if(xq[316]==5){
		if(f!=0)
			my_printf("\n");
		f++;
		my_printf("11");
	}
	if(xq[346]==5){
		if(f!=0)
			my_printf("\n");
		f++;
		my_printf("12");
	}
}





