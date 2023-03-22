#include <header.h>

int main_bench()
{
	int n,i,j,k=1,sz[100000],num=0;
	my_scanf("%d",&n);
	sz[0]=3;
	for(i=3;i<=n;i++){
		for(j=2;j<=(i/2);j++){
			if(i%j==0)break;
			if(j==(i/2))sz[k++]=i;
		}
	}
	for(i=0;i<=n;i++){
		if(sz[i+1]-sz[i]==2){
			my_printf("%d %d\n",sz[i],sz[i+1]);
			num+=1;
		}
	}
	if(num==0)my_printf("empty");
	return 0;
}

