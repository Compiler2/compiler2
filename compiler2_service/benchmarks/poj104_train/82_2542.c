#define NUM_ITER 35936

#include <header.h>

int main_bench(){
	int high[100],low[100],count,max,all,i;
	my_scanf("%d",&all);
	max=0;
	for(i=0;i<all;i++){
		my_scanf("%d %d",&high[i],&low[i]);
	}
	for(i=0;i<all-1;i++){
		if(high[i]>=90&&high[i]<=140&&low[i]>=60&&low[i]<=90){
			count=0;
			while(high[i+1]>=90&&high[i+1]<=140&&low[i+1]>=60&&low[i+1]<=90){
				i++;count++;
			}
			count++;
			if(count>max){max=count;}

		}
	}
	if(all==1&&high[i]>=90&&high[i]<=140&&low[i]>=60&&low[i]<=90){max=1;}
	my_printf("%d",max);

	
return 0;
}