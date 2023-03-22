#define NUM_ITER 691781

#include <header.h>

int main_bench(){
	char s[50];
	char w[50];
	char sw[50];
	int schangdu;
	int wchangdu;
	int i,j;
	int m;
	int tag=0;
	my_scanf ("%s",s);
	my_scanf ("%s",w);
	schangdu=strlen(s);
	wchangdu=strlen(w);
	for(i=0;i<wchangdu;i++){
		for(j=i;j<i+schangdu;j++){
			sw[j-i]=w[j];
		}
		sw[schangdu]=0;
			m=strcmp(s,sw);
			if(m==0){
				my_printf("%d",i);
				tag=1;
				break;
			}
			if(tag==1){
				break;
			}
	    if(tag==1){
			break;
		}
	}
	return 0;
}