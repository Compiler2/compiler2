#include <header.h>

int main_bench(){
	char str[5000], s[300][30];
	int i, a=0, b=0, sum=1;
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			s[a][b]='\0';
			a++;
			b=0;
			sum++;
		}
		else{
			s[a][b]=str[i];
			b++;
		}
	}
	s[a][b]='\0';
	for(i=0;i<sum-1;i++){
		if(strlen(s[i])!=0){
			my_printf("%d,", strlen(s[i]));
		}
	}
	my_printf("%d", strlen(s[sum-1]));
	return 0;
}