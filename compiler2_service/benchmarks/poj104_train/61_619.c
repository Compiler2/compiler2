#include <header.h>

int main_bench(){
	int i=1,j=2,a,n,e,c[100],s[100],w[100];
	my_scanf("%d",&n);
	s[0]=1;
	for(int t=1;t<=90;t++){
		s[t]=i;
		e=j;
		j=i+j;
		i=e;
	}
	for(int r=0;r<=n-1;r++){
		my_scanf("%d",&c[r]);
		w[r]=s[c[r]-1];
	}
	for(int y=0;y<=n-1;y++){
		my_printf("%d\n",w[y]);
	}

	return 0;}