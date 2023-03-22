#include <header.h>

int main_bench(){
	int n,a,b,c,d,i;
	float x,y,sz[1000];
	my_scanf("%d",&n);
	my_scanf("%d%d",&a,&b);
	x=(float)b/a;
	for(i=1;i<n;i++){
		my_scanf("%d%d",&c,&d);
		sz[i]=(float)d/c;
	}for(i=1;i<n;i++){
		if(sz[i]-x>0.05){
			my_printf("better\n");
		}else if(x-sz[i]>0.05){
			my_printf("worse\n");
		}else{
			my_printf("same\n");
		}
	}return 0;
}


	

