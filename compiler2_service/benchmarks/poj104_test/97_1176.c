#define NUM_ITER 1440547

#include <header.h>

int main_bench(){
	int money,i,num[6];
	my_scanf("%d",&money);
	num[0]=money/100;
	num[1]=(money-100*num[0])/50;
	num[2]=(money-100*num[0]-50*num[1])/20;
	num[3]=(money-100*num[0]-50*num[1]-20*num[2])/10;
	num[4]=(money-100*num[0]-50*num[1]-20*num[2]-10*num[3])/5;
	num[5]=money-100*num[0]-50*num[1]-20*num[2]-10*num[3]-5*num[4];
	for(i=0;i<6;i++)
	{
		my_printf("%d\n",num[i]);
	}
	return 0;
}