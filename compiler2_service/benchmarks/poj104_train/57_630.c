#include <header.h>

int main_bench()
{   int i,n,j;
	char c[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",c);
		if(c[strlen(c)-1]=='r'){
			for(j=0;j<strlen(c)-2;j++){
				my_printf("%c",c[j]);
			}
			my_printf("\n");
		}
		if(c[strlen(c)-1]=='y'){
			for(j=0;j<strlen(c)-2;j++){
				my_printf("%c",c[j]);
			}
			my_printf("\n");
		}
		if(c[strlen(c)-1]=='g'){
			for(j=0;j<strlen(c)-3;j++){
				my_printf("%c",c[j]);
			}
			my_printf("\n");
		}
	}
	return 0;
}