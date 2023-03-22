#include <header.h>

main_bench(){
	int n,i,money;
	my_scanf("%d",&n);
	money=n;

	for(i=0;money>0;i++){
		money-=100;
	}
	if(money<0){
		money+=100;
		i--;
	}
	my_printf("%d\n",i);

	for(i=0;money>0;i++){
		money-=50;
	}
	if(money<0){
		money+=50;
		i--;
	}
	my_printf("%d\n",i);

	for(i=0;money>0;i++){
		money-=20;
	}
	if(money<0){
		money+=20;
		i--;
	}
	my_printf("%d\n",i);

	for(i=0;money>0;i++){
		money-=10;
	}
	if(money<0){
		money+=10;
		i--;
	}
	my_printf("%d\n",i);

	for(i=0;money>0;i++){
		money-=5;
	}
	if(money<0){
		money+=5;
		i--;
	}
	my_printf("%d\n",i);
	my_printf("%d\n",money);
	return 0;
}