#include <header.h>

int main_bench(){
	int n,x,y;
	int i=1;
	int max=0;
	int time=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d %d\n",&x,&y);
		if(x>=90 && x<=140 && y>=60 && y<=90){
			time+=1;
			if(time>=max){
				max=time;
			}
		}else{
			time=0;
		}
	}
	my_printf("%d",max);
	return 0;
}
