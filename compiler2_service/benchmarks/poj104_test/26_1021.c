#define NUM_ITER 1537601

#include <header.h>

int main_bench(){
	char s[101];
	gets(s);
	int i,j;
	for(i=0;s[i]!='\0';i++){
		if(s[i]!=' '){
		my_printf("%c",s[i]);
		}else{
			my_printf(" ");
            for(j=i;s[j]==' ';j++){
				i=j;
			}
		}
	}
	return 0;
}