#include <header.h>

int main_bench()
{	char n[31];
	int i,u;
	gets(n);
	for(i=0;i<strlen(n);i++){
		if(n[i]<='9'&&n[i]>='0'){
		my_printf("%c",n[i]);
		u=1;
		}
		else{
			if(u)
				my_printf("\n");
			u=0;
		}
	}
	return 0;
}
