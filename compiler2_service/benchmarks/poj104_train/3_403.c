#include <header.h>

int main_bench(){
	int sz[1000];
	int m,n,i,k,result,mark=0,j=0;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}for(i=0;i<n;i++){
		for(k=1;k<n-i;k++){
			result=sz[i]+sz[i+k];
			if(result==m&&j==0){
				my_printf("yes");
				j++;
			mark=1;
			}
		}
	}if(mark==0){
		my_printf("no");
	}return 0;
}
