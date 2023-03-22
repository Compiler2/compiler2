#include <header.h>

int main_bench(){
	int i,j,flag;
	char s[101],a[101],b[101];
	gets(s);
	gets(a);
	gets(b);
	flag=0;
	do{
		for(i=flag;i<strlen(s);i++){
			if(s[i+1]==' ' || s[i+1]=='\0'){
				if(i-flag+1!=strlen(a)){
					for(j=flag;j<=i;j++){
						my_printf("%c",s[j]);
					}
				}else{
					for(j=flag;j<=i;j++){
						if(a[j-flag]!=s[j]){
							break;
						}
					}
					if(j==i+1){
						my_printf("%s",b);
					}else{
						for(j=flag;j<=i;j++){
							my_printf("%c",s[j]);
						}
					}
				}
			    flag=i+2;
				if(s[i+1]==' '){
				    my_printf(" ");
				}else{
					my_printf("\n");
				}
				break;
			}
		}
	}while(i<strlen(s));
	return 0;
}