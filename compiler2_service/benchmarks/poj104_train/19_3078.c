#define NUM_ITER 892210

#include <header.h>

int main_bench()
{
	char a[100],b[100],c[100];
	gets(a);
	gets(b);
	gets(c);
	
	for(int i = 0;i < strlen(a);i ++){
		if(a[i] == b[0] && (a[i-1] == ' ' || i == 0)  && (a[i+strlen(b)] == ' ' || i + strlen(b) == strlen(a))){
			int check = 0;
			for(int j = 0;j < strlen(b);j ++){
				if(a[j+i] != b[j]){
					check = 1;
					break;
				}
			}
			if(check == 0){
				my_printf("%s",c);
				i +=strlen(b) - 1;
				continue;
			}
		}
		my_printf("%c",a[i]);
	}
			
				return 0;
}
