#include <header.h>


int main_bench(){
	int sum=0,max=0;
	int pre[101][2];
	int n,i=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&pre[i][0],&pre[i][1]);
	}
	for(i=0;i<n;i++){
		if((pre[i][0]>=90)&&(pre[i][0]<=140)&&(pre[i][1]>=60)&&(pre[i][1]<=90)){
			sum++;
			if(sum>max){
				max=sum;
			}
		}else{
			sum=0;
		}
	}
	my_printf("%d\n",max);
	return 0;
}
