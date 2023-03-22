#include <header.h>

int main_bench(){
	char s[1000];
	int n;
	my_scanf("%d", &n);
	for(int i=1; i<=n; i++){
		my_scanf("%s", &s);
		for(int j=0; j<strlen(s); j++){
			if(j<strlen(s)-1&&s[j]=='A')
				my_printf("T");
			if(j<strlen(s)-1&&s[j]=='T')
				my_printf("A");
			if(j<strlen(s)-1&&s[j]=='G')
				my_printf("C");
			if(j<strlen(s)-1&&s[j]=='C')
				my_printf("G");
			if(j==strlen(s)-1){
				if(s[j]=='A')
					my_printf("T\n");
				if(s[j]=='T')
					my_printf("A\n");
				if(s[j]=='G')
					my_printf("C\n");
				if(s[j]=='C')
					my_printf("G\n");
			}
		}
	}
	return 0;
}

