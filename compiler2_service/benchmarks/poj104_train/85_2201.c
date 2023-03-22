#include <header.h>

int main_bench(){
    int n,i,j;
	char str[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",str);
		if(str[0]=='_'||(str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z')){
			for(j=1;str[j]!='\0';j++){
				if(str[j]=='_'||(str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9')){
					j=j;
			}else{
					my_printf("no\n");
					break;
			}
			}
			if(str[j]=='\0'){
					my_printf("yes\n");
			}
		}else{
			my_printf("no\n");
		}
	}
	return 0;
}
