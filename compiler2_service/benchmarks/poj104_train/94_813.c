#include <header.h>

int main_bench(){
	int n,i,j,count;
	my_scanf("%d",&n);
	int sz[500];
	for (i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	j=0;
	count=0;
	int jishu[500];
	for(i=0;i<n;i++){
		if(sz[i]%2==1){
			jishu[j]=sz[i];
			j++;
			count++;
		}
	}
	for(i=1;i<=count;i++){
		for (j=0;j<count-i;j++){
			if(jishu[j]>jishu[j+1]){
				int e;
				e=jishu[j+1];
				jishu[j+1]=jishu[j];
				jishu[j]=e;
			}
		}
	}
	for(j=0;j<count;j++){
		if(j==0){
		my_printf("%d",jishu[j]);
		}else {
			my_printf(",%d",jishu[j]);
		}
	}
	return 0;
}