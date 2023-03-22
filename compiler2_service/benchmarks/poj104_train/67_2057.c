#include <header.h>

int main_bench(){
	int n;
	
	my_scanf("%d",&n);
	int *a=(int*)malloc(sizeof(int)*n);
	int *b=(int*)malloc(sizeof(int)*n);
	double x,y;
	for(int i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
		if(i==0){
			x=(double)b[i]/a[i];
		}else{
			y=(double)b[i]/a[i];
		}
		if(i!=0){
			if(i!=1){
				my_printf("\n");
			}
			if((y-x)>0.05){
				my_printf("better");
			}else if((x-y)>0.05){
			
				my_printf("worse");
			}else{
				my_printf("same");
			}

		}

	
		
	
	
	
	}


	





	return 0;
}