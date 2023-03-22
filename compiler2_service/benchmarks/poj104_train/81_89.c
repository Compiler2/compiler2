#define NUM_ITER 215031

#include <header.h>

int hanshu(int m,int n){
	if(m>=0&&m<5&&n>=0&&n<5){
		return 1;
	}
	else{
		return 0;
	}
}
int main_bench(){
	int m,n;
	int sz[5][5];
	int sz2[5];
	int hang,lie;
	for(hang=0;hang<5;hang++){
		for(lie=0;lie<5;lie++){
			my_scanf("%d",&sz[hang][lie]);
		}
	}
	my_scanf("%d %d",&m,&n);
	int result=hanshu(m,n);
	if(result==0){
		my_printf("error");
	}
	else{
		for(lie=0;lie<5;lie++){
			sz2[lie]=sz[m][lie];
			sz[m][lie]=sz[n][lie];
			sz[n][lie]=sz2[lie];
		}
		for(hang=0;hang<5;hang++){
			my_printf("%d %d %d %d %d\n",sz[hang][0],sz[hang][1],sz[hang][2],sz[hang][3],sz[hang][4]);
		}
	}
	return 0;
}