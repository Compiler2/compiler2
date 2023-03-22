#define NUM_ITER 774246

#include <header.h>

int main_bench(){
	char zfc[10005];
	int i,j,k,l;
	j=0;
	gets(zfc);
	l=0;
	for(i=0;i<strlen(zfc);i++){
		if(zfc[i]==' '&&zfc[i-1]!=' ') l++;
	}
	for(i=0;i<=strlen(zfc);i++){
		if((zfc[i]==' '&&zfc[i-1]!=' ')||i==strlen(zfc)){
			my_printf("%d",j);
			j=0;
			l--;
			if(l>=0) my_printf(",");
		}
		if(zfc[i]!=' ') j++;
	}
	my_scanf("%s",zfc);
	return 0;
}