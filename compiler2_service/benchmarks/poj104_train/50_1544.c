#define NUM_ITER 205294

#include <header.h>

int main_bench(){
    int w,i;
	int md[12]={31,28,31,30,31,30,31,31,30,31,30,31},mzs[12],shis[12];
	my_scanf("%d",&w);
	mzs[0]=31;
	for(i=1;i<12;i++) mzs[i]=mzs[i-1]+md[i];
	shis[0]=13-1;
	for(i=1;i<12;i++) shis[i]=mzs[i-1]+13-1;
	for(i=0;i<12;i++) {
		if(shis[i]%7==0&&w==5) my_printf("%d\n",i+1);
		else if(shis[i]%7==1&&w==4) my_printf("%d\n",i+1);
		else if(shis[i]%7==2&&w==3) my_printf("%d\n",i+1);
		else if(shis[i]%7==3&&w==2) my_printf("%d\n",i+1);
		else if(shis[i]%7==4&&w==1) my_printf("%d\n",i+1);
		else if(shis[i]%7==5&&w==7) my_printf("%d\n",i+1);
		else if(shis[i]%7==6&&w==6) my_printf("%d\n",i+1);
	}
	return 0;
}
