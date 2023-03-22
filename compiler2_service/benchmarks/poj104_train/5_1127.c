#define NUM_ITER 895338

#include <header.h>

int main_bench(){
	int sum=0,lena,lenb,i,c;
	char yi[501],er[501];
	double rate,a;
	my_scanf("%lf",&a);
	my_scanf("%s%s",yi,er);
	lena=strlen(yi);
	lenb=strlen(er);
	if(lenb!=lena){
		my_printf("error");
	}else{
		for(i=0;i<lena;i++){
			if(yi[i]==0){
				break;
			}else if(yi[i]>='A'&&yi[i]<='Z'&&er[i]>='A'&&er[i<='Z']){
				if(yi[i]==er[i]){
					sum++;
				}else{
					continue;
				}
			}else{
				c=1;
				my_printf("error");
				break;
			}
		}
		rate=sum*1.0/lena;
		if(c!=1){
		if(rate>a){
			my_printf("yes");
		}else if(rate<=a){
			my_printf("no");
		}
		}
	}
	return 0;
}