#include <header.h>


int main_bench(){
	struct point{
		int a,b;
	}p[50000];

	int i,k,n,l,r;
	double j;

	my_scanf("%d",&n);
	
	for(i=0;i<n;i++){
		my_scanf("%d%d",&p[i].a,&p[i].b);
	}
	l=p[0].a;
	r=p[0].b;


	for(i=1;i<n;i++){
		if(p[i].a<l){
			l=p[i].a;
		}
		if(p[i].b>r){
			r=p[i].b;
		}
	}

	for(j=l+0.5;j<r;j++){
		k=0;
		for(i=0;i<n;i++){
			if(j<p[i].a||j>p[i].b){
				k++;
			}
		}
		if(k==n){
			my_printf("no");
			break;
		}
	}
	if(j==r+0.5){
		my_printf("%d %d",l,r);
	}





	return 0;
}
