#define NUM_ITER 861763

#include <header.h>

int main_bench(){
	char zfc1[55],zfc2[55];
	int i,j,k;
	my_scanf("%s",zfc1);
	my_scanf("%s",zfc2);
	k=0;
	for(i=0;i<strlen(zfc2);i++){
		if(zfc1[0]==zfc2[i]){
			k=i;
			for(j=i;j<i+strlen(zfc1)-1;j++){
				if(zfc1[j-i]!=zfc2[j]){
					k=0;
					break;
				}
			}
		}
		if(k!=0) break;
	}
	my_printf("%d",k);
	my_scanf("%s",zfc1);
	return 0;
}