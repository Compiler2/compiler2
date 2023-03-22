#include <header.h>

int main_bench(){
	int n,m,i,*p,j,b=0;
	my_scanf("%d %d\n",&n,&m);
	p=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		my_scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(p[i]+p[j]==m){
				b=1;
			}
			else continue;
		}
	}
	if(b){
		my_printf("yes");
	}
	else my_printf("no");
	free(p);
	return 0;
}

