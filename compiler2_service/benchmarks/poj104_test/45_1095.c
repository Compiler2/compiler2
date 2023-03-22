#include <header.h>

int main_bench(){
	char a[20],b[20];
	int i;
	my_scanf("%s",a);
	my_scanf("%s",b);
    for(i=0;i<strlen(b);i++){
		if(b[i]==a[0])
			break;
	}
	my_printf("%d",i);
	return 0;
}
