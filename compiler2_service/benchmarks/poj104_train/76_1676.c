#define NUM_ITER 5866

#include <header.h>

int main_bench(){
	int n,i,j,m;
	my_scanf("%d",&n);
	struct qj{
		int x,y;}
	qj[50000];
	for(i=0;i<n;i++){
		my_scanf("%d%d",&qj[i].x,&qj[i].y);}
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(qj[j].x>qj[j+1].x){
				int a,b;
				a=qj[j+1].x;
				b=qj[j+1].y;
				qj[j+1].x=qj[j].x;
				qj[j+1].y=qj[j].y;
				qj[j].x=a;
				qj[j].y=b;}}}
	m=qj[0].y;
	for(i=0;i<n-1;i++){
		if(qj[i+1].y>m){
			if(qj[i+1].x>m){
				my_printf("no");
				return 0;}
			m=qj[i+1].y;}}
	my_printf("%d %d",qj[0].x,m);
	return 0;
}
        