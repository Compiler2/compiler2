#define NUM_ITER 1414

#include <header.h>


int main_bench()
{
	int n,first=1,no=0;
	char c;
	my_scanf("%d",&n);
	getchar();
	for(;n>0;n--){
		c=getchar();
		while(c!='\n'){
			if(first){
				if(!(isalpha(c)||c=='_')){
					no=1;
					break;
				}
				else first=0;
			}
			else{
				if(!(isalnum(c)||c=='_')){
					no=1;
					break;
				}
			}
			c=getchar();
		}
		if(no){
			my_printf("no\n");
			while(c!='\n') c=getchar();
		}
		else my_printf("yes\n");
		first=1;
		no=0;
	}
	
}