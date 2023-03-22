#define NUM_ITER 27463

#include <header.h>

int main_bench(){
	int n;
	int i=0;
	int count=0;
	int a[200][2];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i][0],&a[i][1]);
	}
	for(i=0;i<n;i++){
		if(a[i][0]==0&&a[i][1]==1){
			count++;
		}else if(a[i][0]==0&&a[i][1]==2){
			count--;
		}else if(a[i][0]==0&&a[i][1]==0){
			count+=0;
		}else if(a[i][0]==1&&a[i][1]==0){
			count--;
		}else if(a[i][0]==1&&a[i][1]==1){
			count+=0;
		}else if(a[i][0]==1&&a[i][1]==2){
			count++;
		}else if(a[i][0]==2&&a[i][1]==0){
			count++;
		}else if(a[i][0]==2&&a[i][1]==1){
			count--;
		}else if(a[i][0]==2&&a[i][1]==2){
			count+=0;
		}
	}
	if(count==0){
		my_printf("Tie\n");
	}else if(count>0){
		my_printf("A\n");
	}else{
		my_printf("B\n");
	}
	return 0;
}