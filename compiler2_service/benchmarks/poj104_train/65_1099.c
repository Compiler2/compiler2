#define NUM_ITER 36567

#include <header.h>

int main_bench()
{
	int n,i=0,a=0,b=0;
	struct cq1{
		int x,y;
	} cq[200];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&(cq[i].x),&(cq[i].y));
	}
	for(i=0;i<n;i++){
		if(((cq[i].x==0)&&(cq[i].y==1))||((cq[i].x==1)&&(cq[i].y==2))||((cq[i].x==2)&&(cq[i].y==0))){
			a=a+1;
		}else if(((cq[i].y==0)&&(cq[i].x==1))||((cq[i].y==1)&&(cq[i].x==2))||((cq[i].y==2)&&(cq[i].x==0))){
			b=b+1;
		}
	}
	if(a>b){
		my_printf("A");
	}
	else if(a<b){
		my_printf("B");
	}else if(a==b){
		my_printf("Tie");
	}
	return 0;
}
