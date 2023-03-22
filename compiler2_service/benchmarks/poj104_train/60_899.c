#include <header.h>

int main_bench(){
	int n,i,j,k=0,sum=0;
	my_scanf("%d",&n);
	int*ss=(int*)malloc(sizeof(int)*n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i%j==0){
				sum++;
			}
		}
		if(sum==2){
			ss[k]=i;
			k++;
		}
		sum=0;
	}
	j=0;
	for(i=0;i<k;i++){
		if(ss[i+1]-ss[i]==2){
			my_printf("%d %d\n",ss[i],ss[i+1]);
			j++;
		}
	}
	if(j==0){
		my_printf("empty");
	}
	free(ss);
return 0;
}