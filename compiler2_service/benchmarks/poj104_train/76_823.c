#define NUM_ITER 22605

#include <header.h>

int main_bench(){
	int n,start[50000],end[50000],st=10000,e=0,i,point=0;
	double j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&start[i],&end[i]);
		if(start[i]<st){st=start[i];}
		if(end[i]>e){e=end[i];}}
	for(j=st+0.5;j<e;j++){
		for(i=0;i<n;i++){
			if(j>start[i]&&j<end[i]){
				point++;
				break;}}}
	if(point==e-st){my_printf("%d %d",st,e);}
	else{my_printf("no");}
	return 0;
}