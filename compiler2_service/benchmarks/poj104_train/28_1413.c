#define NUM_ITER 1310315

#include <header.h>

int main_bench(){
	char zfc[10000];
	gets(zfc);
	int count=0;
	int len;
	len=strlen(zfc);
	for(int i=0;i<=len;i++){
		if(zfc[i]!=' '){
			count++;
		}
		if(zfc[i]==' '&&zfc[i-1]!=' '){
			my_printf("%d,",count);
			count=0;
		}
		if(zfc[i]=='\0'&&zfc[i-1]!=' '){
			my_printf("%d",count-1);
		}
	}return 0;
}