#define NUM_ITER 1353074

#include <header.h>


int main_bench(){
	char str[1000];
	int i,len,judge;
	gets(str);
	len=strlen(str);
	judge=0;
	for(i=0;i<len;i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			my_printf("%c",str[i]);
			judge=0;
		}else if(str[i]=='.'){
			my_printf("%c",str[i]);
			judge=1;
		}else if(str[i]==' '&&judge==0){
			my_printf("%c",str[i]);
			judge=1;
		}else if(str[i]==' '&&judge==1){
			continue;
		}
	}
	my_printf("\n");
}