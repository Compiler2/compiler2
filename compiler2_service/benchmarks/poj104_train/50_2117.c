#include <header.h>



int main_bench()
{
	int first,i,day=13;
	my_scanf("%d",&first);
	for(i=1;i<=12;i++){
		if(i==2||i==4||i==6||i==8||i==9||i==11){
			day+=31;
		}
		if(i==3)day+=28;
		if(i==5||i==7||i==10||i==12){
			day+=30;
		}
		if((day%7-1+first)%7==5)my_printf("%d\n",i);
	}
	return 0;
}

