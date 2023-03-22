#include <header.h>

int main_bench(){
	int n,i=0,t=0;
	char c;
	for(;;){
		my_scanf("%c",&c);
		if(c=='\n'){
			if(i!=0)my_printf(",");
			my_printf("%d",t);
			break;
		}
		else if(c==' '){
			if(t==0)continue;
			else{
			if(i!=0)my_printf(",");
			my_printf("%d",t);
			t=0;
			i=1;
			}
		}
		else t++;
	}
	return 0;
}