#define NUM_ITER 1507785

#include <header.h>

int main_bench()
{
	int i,j;
	char zfc[1000];
	gets(zfc);
	for(i=0;zfc[i]!='\0';i++){
		if(zfc[i]!=' '){
		    my_printf("%c",zfc[i]);
		}else if(zfc[i]==' '){
			if(zfc[i+1]!=' '){
				my_printf(" ");
			}else{
				continue;
			}
		}
	}
	return 0;
}