#define NUM_ITER 36886

#include <header.h>

int main_bench(){
	char a[50][50]={'0'},b;
	int i,max=0,min=0;
	for(i=0;i<50;i++){
		my_scanf("%s",a[i]);
		my_scanf("%c",&b);
		if(b==10){
			break;
		}
	}
	for(i=0;i<50;i++){
		if(strlen(a[i])>strlen(a[max])){
			max=i;
		}
		else if(strlen(a[i])<strlen(a[min])&&strlen(a[i])!=0){
			min=i;
		}
	}
	my_printf("%s\n%s",a[max],a[min]);
	return 0;
}	