#include <header.h>


char s[1000];
char a[101];
char b[101];
char buf[101];

int main_bench(){
	unsigned int i;
	int index;
	gets(s);
	my_scanf("%s",a);
	my_scanf("%s",b);
	index=0;
	for(i=0;i<strlen(s);i++){		
		if(s[i]==' ' || (i==strlen(s)-1)){
			if(i==strlen(s)-1)
				buf[index++]=s[i];
			buf[index]='\0';
			index=0;
			if(!strcmp(buf,a)){
				my_printf("%s",b);
			}
			else{
				my_printf("%s",buf);
			}
			if(i!=strlen(s)-1){
				my_printf(" ");
			}
		}
		else{
			buf[index++]=s[i];
		}
	}	
	return 0;
}