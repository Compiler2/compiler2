#define NUM_ITER 37257

#include <header.h>

int main_bench(){
	int n,i,a[201],b[201],x=0,y=0,t=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
		if(a[i]==0){
			if(b[i]==1)x=x+1;
			else if(b[i]==2)y=y+1;
			else if(b[i]==0)t=t+1;
		}
		else if(a[i]==1){
			if(b[i]==1)t=t+1;
			else if(b[i]==2)x=x+1;
			else if(b[i]==0)y=y+1;
		}
	
		else if(a[i]==2){
			if(b[i]==1)y=y+1;
			else if(b[i]==2)t=t+1;
			else if(b[i]==0)x=x+1;
		}
	}
	if(x>y)my_printf("A");
	else if(x<y)my_printf("B");
	else if((x==0&&y==0)||x==y)my_printf("Tie");







return 0;
}
