#define NUM_ITER 260305

#include <header.h>


int main_bench(){
	char zfc[300],i;
	int dec=0,tag,cs[26]={0},m=0,j;
	my_scanf("%s",zfc);
	int n=strlen(zfc);
	for(i='A';i<='Z';i++){
		tag=0;
		for(j=0;j<n;j++){
			if(zfc[j]==i){
				cs[m]++;
				dec=1;
				tag=1;
			}
		}
		if(tag!=0){
			my_printf("%c=%d\n",i,cs[m]);
			m++;
		}
	}
	for(i='a';i<='z';i++){
		tag=0;
		for(j=0;j<n;j++){
			if(zfc[j]==i){
				cs[m]++;
				dec=1;
				tag=1;
			}
		}
		if(tag!=0){
			my_printf("%c=%d\n",i,cs[m]);
			m++;
		}
	}
	if(dec==0){
		my_printf("No");
	}
	return 0;
}

				