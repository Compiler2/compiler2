#include <header.h>

int main_bench(){
	int n,m,sz[1000],k,i,j,s,t;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&(sz[i]));
	}
	m=n*(n-1);
	int*h
		=(int*)malloc(sizeof(int)*m);
	s=0;
	t=0;
	for(i=0;i<n;i++){
		for(j=0;j<n&&j!=i;j++){
			h[s]=sz[i]+sz[j];
			s++;
		}
	}
	for(i=0;i<s;i++){
		if(h[i]==k){
			t++;	
		}
	}
	if(t==0){
		my_printf("no");
	}else{
		my_printf("yes");
	}
	free(h);
return 0;
}