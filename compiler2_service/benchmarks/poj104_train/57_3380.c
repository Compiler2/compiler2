#include <header.h>


int main_bench() {
	char word[100];
	int n,len;
	my_scanf("%d",&n);
	while(n--){
		my_scanf("%s",word);
		len=strlen(word);
		if(word[len-1]=='r' || word[len-1]=='y'){
				word[len-2]='\0';
		} else if(word[len-1]=='g'){
			word[len-3]='\0';
		}
	my_printf("%s\n",word);
	}
	return 0;
}

