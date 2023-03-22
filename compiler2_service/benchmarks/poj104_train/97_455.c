#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	
	int bai;
	bai=n/100;
	if(bai>0){
		my_printf("%d\n",bai);
		n=n-bai*100;
	}
	else my_printf("0\n");
	
	int wushi;
	wushi=n/50;
	if(wushi>0){
		my_printf("%d\n",wushi);
		n=n-wushi*50;
	}
	else my_printf("0\n");
	
	int ershi;
    ershi=n/20;
	if(ershi>0){
		my_printf("%d\n",ershi);
		n=n-ershi*20;
	}
	else my_printf("0\n");
	
	int shi;
	shi=n/10;
    if(shi>0){
		my_printf("%d\n",shi);
		n=n-shi*10;
	}
	else my_printf("0\n");
    
	int wu;
	wu=n/5;
    if(wu>0){
		my_printf("%d\n",wu);
		n=n-wu*5;
	}
	else my_printf("0\n");

	int yi;
	yi=n;
    if(yi>0){
		my_printf("%d\n",yi);
	}
	else my_printf("0\n");


	return 0;
}
