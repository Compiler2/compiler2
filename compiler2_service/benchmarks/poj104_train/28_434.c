#include <header.h>

int main_bench(){
	char s[300][100];
	int i = 0;
	my_scanf("%s",s[i]);
	my_printf("%d",strlen(s[i]));
	while(1){
		i++;
		my_scanf("%s",s[i]);
		if(strcmp(s[i],s[i-1])==0 || strlen(s[i]) == 0 )
			break;
		else{
			my_printf(",");
			my_printf("%d",strlen(s[i]));
		}
	}
}