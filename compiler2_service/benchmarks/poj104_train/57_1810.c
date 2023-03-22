#include <header.h>

int main_bench(){
    int i,n,LEN;
	char zfc[51];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",zfc);
		LEN=strlen(zfc);
		switch(zfc[LEN-1]){
		case 'r': zfc[LEN-2]='\0';break;
		case 'y': zfc[LEN-2]='\0';break;
		case 'g': zfc[LEN-3]='\0';break;
		}
		my_printf("%s\n",zfc);
	}
	return 0;
}