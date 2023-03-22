#include <header.h>

int main_bench(){
	
	int n,x,y;
	double rule,m;
	my_scanf("%d",&n);
	int *a
		=(int*)malloc(sizeof(int)*n);
    int *b
		=(int*)malloc(sizeof(int)*n);
	int i;
	my_scanf("%d %d",&x,&y);
	rule=1.0*y/x;
	for(i=0;i<n-1;i++){
		my_scanf("%d %d",&a[i],&b[i]);
		
	}
	for(i=0;i<n-1;i++){
	    m=1.0*b[i]/a[i];
		if(m>rule+0.05){my_printf("better\n");}
		else if(m<rule-0.05){my_printf("worse\n");}
		else {my_printf("same\n");}
	}
	return 0;
}