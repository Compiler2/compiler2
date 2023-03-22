#define NUM_ITER 822122

#include <header.h>

int main_bench(){
	char zfc1[505],zfc2[505];
	int i,j;
	double k;
	j=0;
	my_scanf("%lf",&k);
	my_scanf("%s",zfc1);
	my_scanf("%s",zfc2);
	if(strlen(zfc1)!=strlen(zfc2)){
		my_printf("error");
		my_scanf("%s",zfc1);
		return 0;
	}
	for(i=0;i<strlen(zfc1);i++){
		if((zfc1[i]!='A'&&zfc1[i]!='T'&&zfc1[i]!='C'&&zfc1[i]!='G')||(zfc2[i]!='A'&&zfc2[i]!='T'&&zfc2[i]!='C'&&zfc2[i]!='G')){
			my_printf("error");
			my_scanf("%s",zfc1);
			return 0;
		}
	}
	for(i=0;i<strlen(zfc1);i++){
		if(zfc1[i]==zfc2[i]) j++;
	}
	if(1.0*j/strlen(zfc1)>k) my_printf("yes");
	else my_printf("no");
	my_scanf("%s",zfc1);
	return 0;
}