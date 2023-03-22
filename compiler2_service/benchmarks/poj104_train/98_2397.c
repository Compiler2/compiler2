#include <header.h>


int main_bench(){
	int n,i,count=0;
	int len[10000];
	char sz[10000][21]={'\0'};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",sz[i]);
	}
	for(i=0;i<n;i++){
		len[i]=strlen(sz[i]);
	}
	for(i=0;i<n-1;i++){
		count=count+len[i]+1;
		if(count>81){
			my_printf("\n");
			count=0;
			continue;
		}
		else if((count-1<=80)&&(count+len[i+1]>80)){
			my_printf("%s\n",sz[i]);
			count=0;
			continue;
		}
		else if((count<=80)&&(count+len[i+1]<=80)){
			my_printf("%s ",sz[i]);
			continue;
		}
	}
	my_printf("%s",sz[n-1]);
	return 0;
}
	
