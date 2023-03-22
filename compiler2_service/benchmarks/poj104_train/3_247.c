#define NUM_ITER 53960

#include <header.h>

char s[100][255];
int main_bench(){
	int n,k,i,j,b=0,c=0,d=0,e=0,flag=0;
	int num[1000];
		my_scanf("%d%d",&n,&k);
		for(i=0;i<n;i++){
			my_scanf("%d",&num[i]);
		}

		for(i=0;i<n-1&&!flag;i++){
			for(j=i+1;j<n;j++){
				if(num[i]+num[j]==k){
					flag=1;
				}
			}
		}
		if(flag==1){
			my_printf("yes");
		}else {
			my_printf("no");
		}


	return 0;
}