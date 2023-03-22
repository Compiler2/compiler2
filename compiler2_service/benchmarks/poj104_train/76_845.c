#define NUM_ITER 24824

#include <header.h>

int main_bench(){
	int n,i,min,max,c=0,j, qs[50000],zd[50000];
	double g;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&qs[i],&zd[i]);
	}
	for(i=0;i<n;i++){
		if(i==0||qs[i]<min)
			min=qs[i];
		if(i==0||zd[i]>max)
			max=zd[i];
	}
    for(g=(1.0*min+0.5);g<=(1.0*max);g+=1.0){
		for(j=0;j<n;j++){
			if(g>=1.0*qs[j]&&g<=1.0*zd[j]){
				c++;
				break;
			}
		}
	}
	if(c==max-min){
		my_printf("%d %d\n",min,max);
	}else{
		my_printf("no\n");
	}
	return 0;
}



